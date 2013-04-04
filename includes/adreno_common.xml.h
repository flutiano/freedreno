#ifndef ADRENO_COMMON_XML
#define ADRENO_COMMON_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- /home/robclark/src/freedreno/envytools/rnndb/a2xx.xml                (  30411 bytes, from 2013-04-04 21:59:44)
- /home/robclark/src/freedreno/envytools/rnndb/freedreno_copyright.xml (   1453 bytes, from 2013-03-31 16:51:27)
- /home/robclark/src/freedreno/envytools/rnndb/adreno_common.xml       (   2797 bytes, from 2013-04-04 17:52:36)
- /home/robclark/src/freedreno/envytools/rnndb/adreno_pm4.xml          (   7736 bytes, from 2013-04-04 20:24:12)

Copyright (C) 2013 by the following authors:
- Rob Clark <robdclark@gmail.com> (robclark)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


enum adreno_pa_su_sc_draw {
	PC_DRAW_POINTS = 0,
	PC_DRAW_LINES = 1,
	PC_DRAW_TRIANGLES = 2,
};

enum adreno_compare_func {
	FUNC_NEVER = 0,
	FUNC_LESS = 1,
	FUNC_EQUAL = 2,
	FUNC_LEQUAL = 3,
	FUNC_GREATER = 4,
	FUNC_NOTEQUAL = 5,
	FUNC_GEQUAL = 6,
	FUNC_ALWAYS = 7,
};

enum adreno_stencil_op {
	STENCIL_KEEP = 0,
	STENCIL_ZERO = 1,
	STENCIL_REPLACE = 2,
	STENCIL_INCR_CLAMP = 3,
	STENCIL_DECR_CLAMP = 4,
	STENCIL_INVERT = 5,
	STENCIL_INCR_WRAP = 6,
	STENCIL_DECR_WRAP = 7,
};

enum adreno_rb_blend_factor {
	FACTOR_ZERO = 0,
	FACTOR_ONE = 1,
	FACTOR_SRC_COLOR = 4,
	FACTOR_ONE_MINUS_SRC_COLOR = 5,
	FACTOR_SRC_ALPHA = 6,
	FACTOR_ONE_MINUS_SRC_ALPHA = 7,
	FACTOR_DST_COLOR = 8,
	FACTOR_ONE_MINUS_DST_COLOR = 9,
	FACTOR_DST_ALPHA = 10,
	FACTOR_ONE_MINUS_DST_ALPHA = 11,
	FACTOR_CONSTANT_COLOR = 12,
	FACTOR_ONE_MINUS_CONSTANT_COLOR = 13,
	FACTOR_CONSTANT_ALPHA = 14,
	FACTOR_ONE_MINUS_CONSTANT_ALPHA = 15,
	FACTOR_SRC_ALPHA_SATURATE = 16,
};

enum adreno_rb_blend_opcode {
	BLEND_DST_PLUS_SRC = 0,
	BLEND_SRC_MINUS_DST = 1,
	BLEND_MIN_DST_SRC = 2,
	BLEND_MAX_DST_SRC = 3,
	BLEND_DST_MINUS_SRC = 4,
	BLEND_DST_PLUS_SRC_BIAS = 5,
};

enum adreno_rb_surface_endian {
	ENDIAN_NONE = 0,
	ENDIAN_8IN16 = 1,
	ENDIAN_8IN32 = 2,
	ENDIAN_16IN32 = 3,
	ENDIAN_8IN64 = 4,
	ENDIAN_8IN128 = 5,
};


#endif /* ADRENO_COMMON_XML */
