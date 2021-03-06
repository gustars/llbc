# -*- coding: utf-8 -*-
"""
 lua脚本构建器, 将所有离散的lullbc脚本统一构建成一个完整的lullbc脚本文件
"""

import os
from os import path as op

from c import Cfg


class LuScriptIntegrator(object):
    def __init__(self, debug):
        self._debug = debug
        self._script_path = Cfg.getscriptpath()

    def build(self):
        luafiles = []
        script_path = self._script_path
        # 收集common
        luafiles.extend(self._collect_dir('common'))
        # 收集core
        luafiles.extend(self._collect_dir('core'))
        # 收集comm
        luafiles.extend(self._collect_dir('comm'))

        # 添加顶层lullbc_top.lua
        top_luafile = op.join(self._script_path, 'lullbc_top.lua')
        if op.isfile(top_luafile):
            luafiles.append(top_luafile)

        # 生成llbc.lua
        self._build_file(luafiles)

    # region 内部实现
    def _collect_dir(self, dir):
        luafiles = []
        dir = op.join(self._script_path, dir)
        if not op.isdir(dir):
            return luafiles

        for root, dirs, files in os.walk(dir):
            pre_luafiles = []
            normal_luafiles = []
            post_luafiles = []
            for f in files:
                filepath = op.join(root, f)
                if '.svn' in f or '.git' in f:
                    continue

                bname = op.splitext(op.basename(filepath))[0]
                if bname.startswith('__'):
                    used_list = post_luafiles
                elif bname.startswith('_'):
                    used_list = pre_luafiles
                else:
                    used_list = normal_luafiles

                if self._file_includable(bname):
                    used_list.append(filepath)

            luafiles.extend(pre_luafiles)
            luafiles.extend(normal_luafiles)
            luafiles.extend(post_luafiles)
        return luafiles

    def _file_includable(self, filename):
        endswith_debug = filename.endswith('_debug')
        if endswith_debug:
            endswith_release = False
        else:
            endswith_release = filename.endswith('_release')

        if not endswith_debug and not endswith_release:
            return True

        return (self._debug and endswith_debug) or (not self._debug and endswith_release)

    def _build_file(self, luafiles):
        # 添加文件头
        llbc_file_path = op.join(Cfg.getscriptpath(), 'llbc.lua')
        f = open(llbc_file_path, 'wb')
        f.write(Cfg.getlicensehead() + '\n')

        # 整合所有脚本
        for luafile in luafiles:
            with open(luafile, 'r') as lf:
                f.write('-- ******** SCRIPT: {0} ********\n'.format(luafile[len(self._script_path) + 1:]).replace('\\', '/'))
                f.write(lf.read())
                f.write('\n\n')

        # 最后返回lib table
        f.write('\n')
        f.write('-- return library\n')
        f.write('return llbc\n')

        # 关闭文件
        f.close()
    # endregion

    __Dummy = None
