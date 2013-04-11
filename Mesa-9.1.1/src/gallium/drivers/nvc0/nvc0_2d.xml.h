#ifndef NVC0_2D_XML
#define NVC0_2D_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- nvc0_2d.xml    (   9454 bytes, from 2010-10-16 16:03:11)
- copyright.xml  (   6498 bytes, from 2010-10-03 13:18:37)
- nv_object.xml  (  11379 bytes, from 2010-10-16 11:43:24)
- nvchipsets.xml (   2907 bytes, from 2010-10-15 16:28:21)
- nv_defs.xml    (   4437 bytes, from 2010-07-06 07:43:58)
- nv50_defs.xml  (   4482 bytes, from 2010-10-03 13:18:37)

Copyright (C) 2006-2010 by the following authors:
- Artur Huillet <arthur.huillet@free.fr> (ahuillet)
- Ben Skeggs (darktama, darktama_)
- B. R. <koala_br@users.sourceforge.net> (koala_br)
- Carlos Martin <carlosmn@users.sf.net> (carlosmn)
- Christoph Bumiller <e0425955@student.tuwien.ac.at> (calim, chrisbmr)
- Dawid Gajownik <gajownik@users.sf.net> (gajownik)
- Dmitry Baryshkov
- Dmitry Eremin-Solenikov <lumag@users.sf.net> (lumag)
- EdB <edb_@users.sf.net> (edb_)
- Erik Waling <erikwailing@users.sf.net> (erikwaling)
- Francisco Jerez <currojerez@riseup.net> (curro, curro_, currojerez)
- imirkin <imirkin@users.sf.net> (imirkin)
- jb17bsome <jb17bsome@bellsouth.net> (jb17bsome)
- Jeremy Kolb <kjeremy@users.sf.net> (kjeremy)
- Laurent Carlier <lordheavym@gmail.com> (lordheavy)
- Luca Barbieri <luca@luca-barbieri.com> (lb, lb1)
- Maarten Maathuis <madman2003@gmail.com> (stillunknown)
- Marcin Kościelnicki <koriakin@0x04.net> (mwk, koriakin)
- Mark Carey <mark.carey@gmail.com> (careym)
- Matthieu Castet <matthieu.castet@parrot.com> (mat-c)
- nvidiaman <nvidiaman@users.sf.net> (nvidiaman)
- Patrice Mandin <patmandin@gmail.com> (pmandin, pmdata)
- Pekka Paalanen <pq@iki.fi> (pq, ppaalanen)
- Peter Popov <ironpeter@users.sf.net> (ironpeter)
- Richard Hughes <hughsient@users.sf.net> (hughsient)
- Rudi Cilibrasi <cilibrar@users.sf.net> (cilibrar)
- Serge Martin
- Simon Raffeiner
- Stephane Loeuillet <leroutier@users.sf.net> (leroutier)
- Stephane Marchesin <stephane.marchesin@gmail.com> (marcheu)
- sturmflut <sturmflut@users.sf.net> (sturmflut)
- Sylvain Munaut <tnt@246tNt.com>
- Victor Stinner <victor.stinner@haypocalc.com> (haypo)
- Wladmir van der Laan <laanwj@gmail.com> (miathan6)
- Younes Manton <younes.m@gmail.com> (ymanton)

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



#define NVC0_2D_DST_FORMAT					0x00000200

#define NVC0_2D_DST_LINEAR					0x00000204

#define NVC0_2D_DST_TILE_MODE					0x00000208

#define NVC0_2D_DST_DEPTH					0x0000020c

#define NVC0_2D_DST_LAYER					0x00000210

#define NVC0_2D_DST_PITCH					0x00000214

#define NVC0_2D_DST_WIDTH					0x00000218

#define NVC0_2D_DST_HEIGHT					0x0000021c

#define NVC0_2D_DST_ADDRESS_HIGH				0x00000220

#define NVC0_2D_DST_ADDRESS_LOW					0x00000224

#define NVC0_2D_UNK228						0x00000228

#define NVC0_2D_SRC_FORMAT					0x00000230

#define NVC0_2D_SRC_LINEAR					0x00000234

#define NVC0_2D_SRC_TILE_MODE					0x00000238

#define NVC0_2D_SRC_DEPTH					0x0000023c

#define NVC0_2D_SRC_LAYER					0x00000240

#define NVC0_2D_SRC_PITCH					0x00000244
#define NVC0_2D_SRC_PITCH__MAX					0x00040000

#define NVC0_2D_SRC_WIDTH					0x00000248
#define NVC0_2D_SRC_WIDTH__MAX					0x00010000

#define NVC0_2D_SRC_HEIGHT					0x0000024c
#define NVC0_2D_SRC_HEIGHT__MAX					0x00010000

#define NVC0_2D_SRC_ADDRESS_HIGH				0x00000250

#define NVC0_2D_SRC_ADDRESS_LOW					0x00000254

#define NVC0_2D_UNK258						0x00000258

#define NVC0_2D_UNK260						0x00000260

#define NVC0_2D_COND_ADDRESS_HIGH				0x00000264

#define NVC0_2D_COND_ADDRESS_LOW				0x00000268

#define NVC0_2D_COND_MODE					0x0000026c
#define NVC0_2D_COND_MODE_NEVER					0x00000000
#define NVC0_2D_COND_MODE_ALWAYS				0x00000001
#define NVC0_2D_COND_MODE_RES_NON_ZERO				0x00000002
#define NVC0_2D_COND_MODE_EQUAL					0x00000003
#define NVC0_2D_COND_MODE_NOT_EQUAL				0x00000004

#define NVC0_2D_CLIP_X						0x00000280

#define NVC0_2D_CLIP_Y						0x00000284

#define NVC0_2D_CLIP_W						0x00000288

#define NVC0_2D_CLIP_H						0x0000028c

#define NVC0_2D_CLIP_ENABLE					0x00000290

#define NVC0_2D_COLOR_KEY_FORMAT				0x00000294
#define NVC0_2D_COLOR_KEY_FORMAT_16BPP				0x00000000
#define NVC0_2D_COLOR_KEY_FORMAT_15BPP				0x00000001
#define NVC0_2D_COLOR_KEY_FORMAT_24BPP				0x00000002
#define NVC0_2D_COLOR_KEY_FORMAT_30BPP				0x00000003
#define NVC0_2D_COLOR_KEY_FORMAT_8BPP				0x00000004
#define NVC0_2D_COLOR_KEY_FORMAT_16BPP2				0x00000005
#define NVC0_2D_COLOR_KEY_FORMAT_32BPP				0x00000006

#define NVC0_2D_COLOR_KEY					0x00000298

#define NVC0_2D_COLOR_KEY_ENABLE				0x0000029c

#define NVC0_2D_ROP						0x000002a0

#define NVC0_2D_BETA1						0x000002a4

#define NVC0_2D_BETA4						0x000002a8

#define NVC0_2D_OPERATION					0x000002ac
#define NVC0_2D_OPERATION_SRCCOPY_AND				0x00000000
#define NVC0_2D_OPERATION_ROP_AND				0x00000001
#define NVC0_2D_OPERATION_BLEND					0x00000002
#define NVC0_2D_OPERATION_SRCCOPY				0x00000003
#define NVC0_2D_OPERATION_ROP					0x00000004
#define NVC0_2D_OPERATION_SRCCOPY_PREMULT			0x00000005
#define NVC0_2D_OPERATION_BLEND_PREMULT				0x00000006

#define NVC0_2D_UNK2B0						0x000002b0
#define NVC0_2D_UNK2B0_UNK0__MASK				0x0000003f
#define NVC0_2D_UNK2B0_UNK0__SHIFT				0
#define NVC0_2D_UNK2B0_UNK1__MASK				0x00003f00
#define NVC0_2D_UNK2B0_UNK1__SHIFT				8

#define NVC0_2D_PATTERN_SELECT					0x000002b4
#define NVC0_2D_PATTERN_SELECT_MONO_8X8				0x00000000
#define NVC0_2D_PATTERN_SELECT_MONO_64X1			0x00000001
#define NVC0_2D_PATTERN_SELECT_MONO_1X64			0x00000002
#define NVC0_2D_PATTERN_SELECT_COLOR				0x00000003

#define NVC0_2D_PATTERN_COLOR_FORMAT				0x000002e8
#define NVC0_2D_PATTERN_COLOR_FORMAT_16BPP			0x00000000
#define NVC0_2D_PATTERN_COLOR_FORMAT_15BPP			0x00000001
#define NVC0_2D_PATTERN_COLOR_FORMAT_32BPP			0x00000002
#define NVC0_2D_PATTERN_COLOR_FORMAT_8BPP			0x00000003
#define NVC0_2D_PATTERN_COLOR_FORMAT_UNK4			0x00000004
#define NVC0_2D_PATTERN_COLOR_FORMAT_UNK5			0x00000005

#define NVC0_2D_PATTERN_MONO_FORMAT				0x000002ec
#define NVC0_2D_PATTERN_MONO_FORMAT_CGA6			0x00000000
#define NVC0_2D_PATTERN_MONO_FORMAT_LE				0x00000001

#define NVC0_2D_PATTERN_COLOR(i0)			       (0x000002f0 + 0x4*(i0))
#define NVC0_2D_PATTERN_COLOR__ESIZE				0x00000004
#define NVC0_2D_PATTERN_COLOR__LEN				0x00000002

#define NVC0_2D_PATTERN_BITMAP(i0)			       (0x000002f8 + 0x4*(i0))
#define NVC0_2D_PATTERN_BITMAP__ESIZE				0x00000004
#define NVC0_2D_PATTERN_BITMAP__LEN				0x00000002

#define NVC0_2D_PATTERN_X8R8G8B8(i0)			       (0x00000300 + 0x4*(i0))
#define NVC0_2D_PATTERN_X8R8G8B8__ESIZE				0x00000004
#define NVC0_2D_PATTERN_X8R8G8B8__LEN				0x00000040
#define NVC0_2D_PATTERN_X8R8G8B8_B__MASK			0x000000ff
#define NVC0_2D_PATTERN_X8R8G8B8_B__SHIFT			0
#define NVC0_2D_PATTERN_X8R8G8B8_G__MASK			0x0000ff00
#define NVC0_2D_PATTERN_X8R8G8B8_G__SHIFT			8
#define NVC0_2D_PATTERN_X8R8G8B8_R__MASK			0x00ff0000
#define NVC0_2D_PATTERN_X8R8G8B8_R__SHIFT			16

#define NVC0_2D_PATTERN_R5G6B5(i0)			       (0x00000400 + 0x4*(i0))
#define NVC0_2D_PATTERN_R5G6B5__ESIZE				0x00000004
#define NVC0_2D_PATTERN_R5G6B5__LEN				0x00000020
#define NVC0_2D_PATTERN_R5G6B5_B0__MASK				0x0000001f
#define NVC0_2D_PATTERN_R5G6B5_B0__SHIFT			0
#define NVC0_2D_PATTERN_R5G6B5_G0__MASK				0x000007e0
#define NVC0_2D_PATTERN_R5G6B5_G0__SHIFT			5
#define NVC0_2D_PATTERN_R5G6B5_R0__MASK				0x0000f800
#define NVC0_2D_PATTERN_R5G6B5_R0__SHIFT			11
#define NVC0_2D_PATTERN_R5G6B5_B1__MASK				0x001f0000
#define NVC0_2D_PATTERN_R5G6B5_B1__SHIFT			16
#define NVC0_2D_PATTERN_R5G6B5_G1__MASK				0x07e00000
#define NVC0_2D_PATTERN_R5G6B5_G1__SHIFT			21
#define NVC0_2D_PATTERN_R5G6B5_R1__MASK				0xf8000000
#define NVC0_2D_PATTERN_R5G6B5_R1__SHIFT			27

#define NVC0_2D_PATTERN_X1R5G5B5(i0)			       (0x00000480 + 0x4*(i0))
#define NVC0_2D_PATTERN_X1R5G5B5__ESIZE				0x00000004
#define NVC0_2D_PATTERN_X1R5G5B5__LEN				0x00000020
#define NVC0_2D_PATTERN_X1R5G5B5_B0__MASK			0x0000001f
#define NVC0_2D_PATTERN_X1R5G5B5_B0__SHIFT			0
#define NVC0_2D_PATTERN_X1R5G5B5_G0__MASK			0x000003e0
#define NVC0_2D_PATTERN_X1R5G5B5_G0__SHIFT			5
#define NVC0_2D_PATTERN_X1R5G5B5_R0__MASK			0x00007c00
#define NVC0_2D_PATTERN_X1R5G5B5_R0__SHIFT			10
#define NVC0_2D_PATTERN_X1R5G5B5_B1__MASK			0x001f0000
#define NVC0_2D_PATTERN_X1R5G5B5_B1__SHIFT			16
#define NVC0_2D_PATTERN_X1R5G5B5_G1__MASK			0x03e00000
#define NVC0_2D_PATTERN_X1R5G5B5_G1__SHIFT			21
#define NVC0_2D_PATTERN_X1R5G5B5_R1__MASK			0x7c000000
#define NVC0_2D_PATTERN_X1R5G5B5_R1__SHIFT			26

#define NVC0_2D_PATTERN_Y8(i0)				       (0x00000500 + 0x4*(i0))
#define NVC0_2D_PATTERN_Y8__ESIZE				0x00000004
#define NVC0_2D_PATTERN_Y8__LEN					0x00000010
#define NVC0_2D_PATTERN_Y8_Y0__MASK				0x000000ff
#define NVC0_2D_PATTERN_Y8_Y0__SHIFT				0
#define NVC0_2D_PATTERN_Y8_Y1__MASK				0x0000ff00
#define NVC0_2D_PATTERN_Y8_Y1__SHIFT				8
#define NVC0_2D_PATTERN_Y8_Y2__MASK				0x00ff0000
#define NVC0_2D_PATTERN_Y8_Y2__SHIFT				16
#define NVC0_2D_PATTERN_Y8_Y3__MASK				0xff000000
#define NVC0_2D_PATTERN_Y8_Y3__SHIFT				24

#define NVC0_2D_DRAW_SHAPE					0x00000580
#define NVC0_2D_DRAW_SHAPE_POINTS				0x00000000
#define NVC0_2D_DRAW_SHAPE_LINES				0x00000001
#define NVC0_2D_DRAW_SHAPE_LINE_STRIP				0x00000002
#define NVC0_2D_DRAW_SHAPE_TRIANGLES				0x00000003
#define NVC0_2D_DRAW_SHAPE_RECTANGLES				0x00000004

#define NVC0_2D_DRAW_COLOR_FORMAT				0x00000584

#define NVC0_2D_DRAW_COLOR					0x00000588

#define NVC0_2D_UNK58C						0x0000058c
#define NVC0_2D_UNK58C_0					0x00000001
#define NVC0_2D_UNK58C_1					0x00000010
#define NVC0_2D_UNK58C_2					0x00000100
#define NVC0_2D_UNK58C_3					0x00001000

#define NVC0_2D_DRAW_POINT16					0x000005e0
#define NVC0_2D_DRAW_POINT16_X__MASK				0x0000ffff
#define NVC0_2D_DRAW_POINT16_X__SHIFT				0
#define NVC0_2D_DRAW_POINT16_Y__MASK				0xffff0000
#define NVC0_2D_DRAW_POINT16_Y__SHIFT				16

#define NVC0_2D_DRAW_POINT32_X(i0)			       (0x00000600 + 0x8*(i0))
#define NVC0_2D_DRAW_POINT32_X__ESIZE				0x00000008
#define NVC0_2D_DRAW_POINT32_X__LEN				0x00000040

#define NVC0_2D_DRAW_POINT32_Y(i0)			       (0x00000604 + 0x8*(i0))
#define NVC0_2D_DRAW_POINT32_Y__ESIZE				0x00000008
#define NVC0_2D_DRAW_POINT32_Y__LEN				0x00000040

#define NVC0_2D_SIFC_BITMAP_ENABLE				0x00000800

#define NVC0_2D_SIFC_FORMAT					0x00000804

#define NVC0_2D_SIFC_BITMAP_FORMAT				0x00000808
#define NVC0_2D_SIFC_BITMAP_FORMAT_I1				0x00000000
#define NVC0_2D_SIFC_BITMAP_FORMAT_I4				0x00000001
#define NVC0_2D_SIFC_BITMAP_FORMAT_I8				0x00000002

#define NVC0_2D_SIFC_BITMAP_LSB_FIRST				0x0000080c

#define NVC0_2D_SIFC_BITMAP_LINE_PACK_MODE			0x00000810
#define NVC0_2D_SIFC_BITMAP_LINE_PACK_MODE_PACKED		0x00000000
#define NVC0_2D_SIFC_BITMAP_LINE_PACK_MODE_ALIGN_BYTE		0x00000001
#define NVC0_2D_SIFC_BITMAP_LINE_PACK_MODE_ALIGN_WORD		0x00000002

#define NVC0_2D_SIFC_BITMAP_COLOR_BIT0				0x00000814

#define NVC0_2D_SIFC_BITMAP_COLOR_BIT1				0x00000818

#define NVC0_2D_SIFC_BITMAP_WRITE_BIT0_ENABLE			0x0000081c

#define NVC0_2D_SIFC_WIDTH					0x00000838

#define NVC0_2D_SIFC_HEIGHT					0x0000083c

#define NVC0_2D_SIFC_DX_DU_FRACT				0x00000840

#define NVC0_2D_SIFC_DX_DU_INT					0x00000844

#define NVC0_2D_SIFC_DY_DV_FRACT				0x00000848

#define NVC0_2D_SIFC_DY_DV_INT					0x0000084c

#define NVC0_2D_SIFC_DST_X_FRACT				0x00000850

#define NVC0_2D_SIFC_DST_X_INT					0x00000854

#define NVC0_2D_SIFC_DST_Y_FRACT				0x00000858

#define NVC0_2D_SIFC_DST_Y_INT					0x0000085c

#define NVC0_2D_SIFC_DATA					0x00000860

#define NVC0_2D_UNK0870						0x00000870

#define NVC0_2D_UNK0880						0x00000880

#define NVC0_2D_UNK0884						0x00000884

#define NVC0_2D_UNK0888						0x00000888

#define NVC0_2D_BLIT_CONTROL					0x0000088c
#define NVC0_2D_BLIT_CONTROL_ORIGIN__MASK			0x00000001
#define NVC0_2D_BLIT_CONTROL_ORIGIN__SHIFT			0
#define NVC0_2D_BLIT_CONTROL_ORIGIN_CENTER			0x00000000
#define NVC0_2D_BLIT_CONTROL_ORIGIN_CORNER			0x00000001
#define NVC0_2D_BLIT_CONTROL_FILTER__MASK			0x00000010
#define NVC0_2D_BLIT_CONTROL_FILTER__SHIFT			4
#define NVC0_2D_BLIT_CONTROL_FILTER_POINT_SAMPLE		0x00000000
#define NVC0_2D_BLIT_CONTROL_FILTER_BILINEAR			0x00000010

#define NVC0_2D_BLIT_DST_X					0x000008b0

#define NVC0_2D_BLIT_DST_Y					0x000008b4

#define NVC0_2D_BLIT_DST_W					0x000008b8

#define NVC0_2D_BLIT_DST_H					0x000008bc

#define NVC0_2D_BLIT_DU_DX_FRACT				0x000008c0

#define NVC0_2D_BLIT_DU_DX_INT					0x000008c4

#define NVC0_2D_BLIT_DV_DY_FRACT				0x000008c8

#define NVC0_2D_BLIT_DV_DY_INT					0x000008cc

#define NVC0_2D_BLIT_SRC_X_FRACT				0x000008d0

#define NVC0_2D_BLIT_SRC_X_INT					0x000008d4

#define NVC0_2D_BLIT_SRC_Y_FRACT				0x000008d8

#define NVC0_2D_BLIT_SRC_Y_INT					0x000008dc


#endif /* NVC0_2D_XML */
