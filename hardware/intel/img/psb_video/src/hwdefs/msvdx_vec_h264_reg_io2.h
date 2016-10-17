/*
 * Copyright (c) 2011 Intel Corporation. All Rights Reserved.
 * Copyright (c) Imagination Technologies Limited, UK
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


/******************************************************************************

 @File         msvdx_vec_h264_reg_io2.h

 @Title        MSVDX Offsets

 @Platform     </b>\n

 @Description  </b>\n This file contains the MSVDX_VEC_H264_REG_IO2_H Defintions.

******************************************************************************/
#if !defined (__MSVDX_VEC_H264_REG_IO2_H__)
#define __MSVDX_VEC_H264_REG_IO2_H__

#ifdef __cplusplus
extern "C" {
#endif


#define MSVDX_VEC_H264_CR_VEC_H264_BE_BOT_FOC_OFFSET            (0x025C)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BOT_FOC_STRIDE            (8)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BOT_FOC_NO_ENTRIES                (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_BOT_FOC     BOTTOMFIELDORDERCNT
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BOT_FOC_BOTTOMFIELDORDERCNT_MASK          (0x0001FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BOT_FOC_BOTTOMFIELDORDERCNT_LSBMASK               (0x0001FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BOT_FOC_BOTTOMFIELDORDERCNT_SHIFT         (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_TOP_FOC_OFFSET            (0x0258)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_TOP_FOC_STRIDE            (8)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_TOP_FOC_NO_ENTRIES                (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_TOP_FOC     TOPFIELDORDERCNT
#define MSVDX_VEC_H264_CR_VEC_H264_BE_TOP_FOC_TOPFIELDORDERCNT_MASK             (0x0001FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_TOP_FOC_TOPFIELDORDERCNT_LSBMASK          (0x0001FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_TOP_FOC_TOPFIELDORDERCNT_SHIFT            (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_OFFSET              (0x02FC)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_STRIDE              (4)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_NO_ENTRIES          (8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0_INVERSE     REFPICLISTINVERSE0_3
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_3_MASK           (0x1F000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_3_LSBMASK                (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_3_SHIFT          (24)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0_INVERSE     REFPICLISTINVERSE0_2
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_2_MASK           (0x001F0000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_2_LSBMASK                (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_2_SHIFT          (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0_INVERSE     REFPICLISTINVERSE0_1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_1_MASK           (0x00001F00)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_1_LSBMASK                (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_1_SHIFT          (8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0_INVERSE     REFPICLISTINVERSE0_0
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_0_MASK           (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_0_LSBMASK                (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_INVERSE_REFPICLISTINVERSE0_0_SHIFT          (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_OFFSET              (0x031C)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_STRIDE              (4)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_NO_ENTRIES          (8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST1     BOTTOMFIELDFLAG1_3
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_3_MASK             (0x80000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_3_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_3_SHIFT            (31)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST1     REFPICLIST1_3
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_3_MASK          (0x0F000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_3_LSBMASK               (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_3_SHIFT         (24)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST1     BOTTOMFIELDFLAG1_2
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_2_MASK             (0x00800000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_2_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_2_SHIFT            (23)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST1     REFPICLIST1_2
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_2_MASK          (0x000F0000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_2_LSBMASK               (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_2_SHIFT         (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST1     BOTTOMFIELDFLAG1_1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_1_MASK             (0x00008000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_1_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_1_SHIFT            (15)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST1     REFPICLIST1_1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_1_MASK          (0x00000F00)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_1_LSBMASK               (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_1_SHIFT         (8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST1     BOTTOMFIELDFLAG1_0
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_0_MASK             (0x00000080)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_0_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_BOTTOMFIELDFLAG1_0_SHIFT            (7)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST1     REFPICLIST1_0
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_0_MASK          (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_0_LSBMASK               (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST1_REFPICLIST1_0_SHIFT         (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_OFFSET              (0x033C)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_STRIDE              (4)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_NO_ENTRIES          (8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0     BOTTOMFIELDFLAG0_3
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_3_MASK             (0x80000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_3_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_3_SHIFT            (31)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0     REFPICLIST0_3
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_3_MASK          (0x0F000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_3_LSBMASK               (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_3_SHIFT         (24)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0     BOTTOMFIELDFLAG0_2
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_2_MASK             (0x00800000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_2_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_2_SHIFT            (23)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0     REFPICLIST0_2
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_2_MASK          (0x000F0000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_2_LSBMASK               (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_2_SHIFT         (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0     BOTTOMFIELDFLAG0_1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_1_MASK             (0x00008000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_1_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_1_SHIFT            (15)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0     REFPICLIST0_1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_1_MASK          (0x00000F00)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_1_LSBMASK               (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_1_SHIFT         (8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0     BOTTOMFIELDFLAG0_0
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_0_MASK             (0x00000080)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_0_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_BOTTOMFIELDFLAG0_0_SHIFT            (7)

// MSVDX_VEC_H264     CR_VEC_H264_BE_LIST0     REFPICLIST0_0
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_0_MASK          (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_0_LSBMASK               (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_LIST0_REFPICLIST0_0_SHIFT         (0)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_OFFSET               (0x0200)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPS0     H264_FE_SPS0_4BIT_SGM_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_H264_FE_SPS0_4BIT_SGM_FLAG_MASK              (0x00004000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_H264_FE_SPS0_4BIT_SGM_FLAG_LSBMASK           (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_H264_FE_SPS0_4BIT_SGM_FLAG_SHIFT             (14)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPS0     MIN_LUMA_BIPRED_SIZE_8X8
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_MIN_LUMA_BIPRED_SIZE_8X8_MASK                (0x00000800)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_MIN_LUMA_BIPRED_SIZE_8X8_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_MIN_LUMA_BIPRED_SIZE_8X8_SHIFT               (11)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPS0     DIRECT_8X8_INFERENCE_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_DIRECT_8X8_INFERENCE_FLAG_MASK               (0x00000400)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_DIRECT_8X8_INFERENCE_FLAG_LSBMASK            (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_DIRECT_8X8_INFERENCE_FLAG_SHIFT              (10)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPS0     CHROMA_FORMAT_IDC
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_CHROMA_FORMAT_IDC_MASK               (0x00000200)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_CHROMA_FORMAT_IDC_LSBMASK            (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_CHROMA_FORMAT_IDC_SHIFT              (9)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPS0     FRAME_MBS_ONLY_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_FRAME_MBS_ONLY_FLAG_MASK             (0x00000100)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_FRAME_MBS_ONLY_FLAG_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_FRAME_MBS_ONLY_FLAG_SHIFT            (8)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPS0     H264_FE_SPS0_SPARE7
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_H264_FE_SPS0_SPARE7_MASK             (0x00000080)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_H264_FE_SPS0_SPARE7_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_H264_FE_SPS0_SPARE7_SHIFT            (7)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPS0     PICWIDTHINMBSLESS1
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_PICWIDTHINMBSLESS1_MASK              (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_PICWIDTHINMBSLESS1_LSBMASK           (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPS0_PICWIDTHINMBSLESS1_SHIFT             (0)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_OFFSET               (0x0204)

// MSVDX_VEC_H264     CR_VEC_H264_FE_PPS0     H264_FE_PPS0_SPARE31DOWNTO7
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_H264_FE_PPS0_SPARE31DOWNTO7_MASK             (0xFFFFFF80)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_H264_FE_PPS0_SPARE31DOWNTO7_LSBMASK          (0x01FFFFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_H264_FE_PPS0_SPARE31DOWNTO7_SHIFT            (7)

// MSVDX_VEC_H264     CR_VEC_H264_FE_PPS0     NUM_SLICE_GROUPS_MINUS1
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_NUM_SLICE_GROUPS_MINUS1_MASK         (0x00000070)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_NUM_SLICE_GROUPS_MINUS1_LSBMASK              (0x00000007)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_NUM_SLICE_GROUPS_MINUS1_SHIFT                (4)

// MSVDX_VEC_H264     CR_VEC_H264_FE_PPS0     H264_FE_PPS0_SPARE3
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_H264_FE_PPS0_SPARE3_MASK             (0x00000008)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_H264_FE_PPS0_SPARE3_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_H264_FE_PPS0_SPARE3_SHIFT            (3)

// MSVDX_VEC_H264     CR_VEC_H264_FE_PPS0     ENTROPY_CODING_MODE_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_ENTROPY_CODING_MODE_FLAG_MASK                (0x00000004)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_ENTROPY_CODING_MODE_FLAG_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_ENTROPY_CODING_MODE_FLAG_SHIFT               (2)

// MSVDX_VEC_H264     CR_VEC_H264_FE_PPS0     CONSTRAINED_INTRA_PRED_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_CONSTRAINED_INTRA_PRED_FLAG_MASK             (0x00000002)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_CONSTRAINED_INTRA_PRED_FLAG_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_CONSTRAINED_INTRA_PRED_FLAG_SHIFT            (1)

// MSVDX_VEC_H264     CR_VEC_H264_FE_PPS0     TRANSFORM_8X8_MODE_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_TRANSFORM_8X8_MODE_FLAG_MASK         (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_TRANSFORM_8X8_MODE_FLAG_LSBMASK              (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_PPS0_TRANSFORM_8X8_MODE_FLAG_SHIFT                (0)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_OFFSET           (0x0208)

// MSVDX_VEC_H264     CR_VEC_H264_FE_CUR_PIC0     H264_FE_CUR_PIC0_SPARE29
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE29_MASK            (0x20000000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE29_LSBMASK         (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE29_SHIFT           (29)

// MSVDX_VEC_H264     CR_VEC_H264_FE_CUR_PIC0     PICSIZEINMBSLESS1
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_PICSIZEINMBSLESS1_MASK           (0x1FFF0000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_PICSIZEINMBSLESS1_LSBMASK                (0x00001FFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_PICSIZEINMBSLESS1_SHIFT          (16)

// MSVDX_VEC_H264     CR_VEC_H264_FE_CUR_PIC0     PICHEIGHTINMBSLESS1
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_PICHEIGHTINMBSLESS1_MASK         (0x00007F00)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_PICHEIGHTINMBSLESS1_LSBMASK              (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_PICHEIGHTINMBSLESS1_SHIFT                (8)

// MSVDX_VEC_H264     CR_VEC_H264_FE_CUR_PIC0     H264_FE_CUR_PIC0_SPARE7DOWNTO5
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE7DOWNTO5_MASK              (0x000000E0)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE7DOWNTO5_LSBMASK           (0x00000007)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE7DOWNTO5_SHIFT             (5)

// MSVDX_VEC_H264     CR_VEC_H264_FE_CUR_PIC0     H264_FE_CUR_PIC0_SPARE3
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE3_MASK             (0x00000008)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE3_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_H264_FE_CUR_PIC0_SPARE3_SHIFT            (3)

// MSVDX_VEC_H264     CR_VEC_H264_FE_CUR_PIC0     MBAFFFRAMEFLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_MBAFFFRAMEFLAG_MASK              (0x00000004)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_MBAFFFRAMEFLAG_LSBMASK           (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_MBAFFFRAMEFLAG_SHIFT             (2)

// MSVDX_VEC_H264     CR_VEC_H264_FE_CUR_PIC0     FIELD_PIC_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_FIELD_PIC_FLAG_MASK              (0x00000002)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_FIELD_PIC_FLAG_LSBMASK           (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_FIELD_PIC_FLAG_SHIFT             (1)

// MSVDX_VEC_H264     CR_VEC_H264_FE_CUR_PIC0     BOTTOM_FIELD_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_BOTTOM_FIELD_FLAG_MASK           (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_BOTTOM_FIELD_FLAG_LSBMASK                (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_CUR_PIC0_BOTTOM_FIELD_FLAG_SHIFT          (0)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_OFFSET             (0x020C)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE0     H264_FE_SLICE0_SPARE25DOWNTO18
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_H264_FE_SLICE0_SPARE25DOWNTO18_MASK                (0x03FC0000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_H264_FE_SLICE0_SPARE25DOWNTO18_LSBMASK             (0x000000FF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_H264_FE_SLICE0_SPARE25DOWNTO18_SHIFT               (18)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE0     SLICETYPE
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_SLICETYPE_MASK             (0x00030000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_SLICETYPE_LSBMASK          (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_SLICETYPE_SHIFT            (16)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE0     CABAC_INIT_IDC
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_CABAC_INIT_IDC_MASK                (0x0000C000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_CABAC_INIT_IDC_LSBMASK             (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_CABAC_INIT_IDC_SHIFT               (14)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE0     SLICECOUNT
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_SLICECOUNT_MASK            (0x00003FFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_SLICECOUNT_LSBMASK         (0x00003FFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE0_SLICECOUNT_SHIFT           (0)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_OFFSET             (0x0210)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE1     FIRST_MB_IN_SLICE_Y
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_FIRST_MB_IN_SLICE_Y_MASK           (0x7F000000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_FIRST_MB_IN_SLICE_Y_LSBMASK                (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_FIRST_MB_IN_SLICE_Y_SHIFT          (24)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE1     H264_FE_SLICE1_SPARE23
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_H264_FE_SLICE1_SPARE23_MASK                (0x00800000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_H264_FE_SLICE1_SPARE23_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_H264_FE_SLICE1_SPARE23_SHIFT               (23)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE1     FIRST_MB_IN_SLICE_X
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_FIRST_MB_IN_SLICE_X_MASK           (0x007F0000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_FIRST_MB_IN_SLICE_X_LSBMASK                (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_FIRST_MB_IN_SLICE_X_SHIFT          (16)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE1     SLICEQPY
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_SLICEQPY_MASK              (0x0000FC00)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_SLICEQPY_LSBMASK           (0x0000003F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_SLICEQPY_SHIFT             (10)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE1     NUM_REF_IDX_L1_ACTIVE_MINUS1
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_NUM_REF_IDX_L1_ACTIVE_MINUS1_MASK          (0x000003E0)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_NUM_REF_IDX_L1_ACTIVE_MINUS1_LSBMASK               (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_NUM_REF_IDX_L1_ACTIVE_MINUS1_SHIFT         (5)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE1     NUM_REF_IDX_L0_ACTIVE_MINUS1
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_NUM_REF_IDX_L0_ACTIVE_MINUS1_MASK          (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_NUM_REF_IDX_L0_ACTIVE_MINUS1_LSBMASK               (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE1_NUM_REF_IDX_L0_ACTIVE_MINUS1_SHIFT         (0)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_BASE_ADDR_SGM_OFFSET              (0x0214)

// MSVDX_VEC_H264     CR_VEC_H264_FE_BASE_ADDR_SGM     MAPUNITTOSLICEGROUPMAP
#define MSVDX_VEC_H264_CR_VEC_H264_FE_BASE_ADDR_SGM_MAPUNITTOSLICEGROUPMAP_MASK         (0xFFFFF000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_BASE_ADDR_SGM_MAPUNITTOSLICEGROUPMAP_LSBMASK              (0x000FFFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_BASE_ADDR_SGM_MAPUNITTOSLICEGROUPMAP_SHIFT                (12)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_OFFSET             (0x0218)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE2     H264_FE_SLICE2_SPARE31DOWNTO30
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_H264_FE_SLICE2_SPARE31DOWNTO30_MASK                (0xC0000000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_H264_FE_SLICE2_SPARE31DOWNTO30_LSBMASK             (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_H264_FE_SLICE2_SPARE31DOWNTO30_SHIFT               (30)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE2     FIRST_MB_IN_SLICE
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_FIRST_MB_IN_SLICE_MASK             (0x3FFF0000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_FIRST_MB_IN_SLICE_LSBMASK          (0x00003FFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_FIRST_MB_IN_SLICE_SHIFT            (16)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SLICE2     H264_FE_SLICE2_SPARE15DOWNTO12
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_H264_FE_SLICE2_SPARE15DOWNTO12_MASK                (0x0000F000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_H264_FE_SLICE2_SPARE15DOWNTO12_LSBMASK             (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SLICE2_H264_FE_SLICE2_SPARE15DOWNTO12_SHIFT               (12)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPARE0_OFFSET             (0x021C)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPARE0     H264_FE_SPARE0_SPARE31DOWNTO12
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPARE0_H264_FE_SPARE0_SPARE31DOWNTO12_MASK                (0xFFFFF000)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPARE0_H264_FE_SPARE0_SPARE31DOWNTO12_LSBMASK             (0x000FFFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPARE0_H264_FE_SPARE0_SPARE31DOWNTO12_SHIFT               (12)

#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPARE1_OFFSET             (0x0220)

// MSVDX_VEC_H264     CR_VEC_H264_FE_SPARE1     H264_FE_SPARE1_SPARE31DOWNTO0
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPARE1_H264_FE_SPARE1_SPARE31DOWNTO0_MASK         (0xFFFFFFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPARE1_H264_FE_SPARE1_SPARE31DOWNTO0_LSBMASK              (0xFFFFFFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_FE_SPARE1_H264_FE_SPARE1_SPARE31DOWNTO0_SHIFT                (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_FOC0_OFFSET               (0x0250)

// MSVDX_VEC_H264     CR_VEC_H264_BE_FOC0     TOPFIELDORDERCNT_CURR
#define MSVDX_VEC_H264_CR_VEC_H264_BE_FOC0_TOPFIELDORDERCNT_CURR_MASK           (0x0001FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_FOC0_TOPFIELDORDERCNT_CURR_LSBMASK                (0x0001FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_FOC0_TOPFIELDORDERCNT_CURR_SHIFT          (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_FOC1_OFFSET               (0x0254)

// MSVDX_VEC_H264     CR_VEC_H264_BE_FOC1     BOTTOMFIELDORDERCNT_CURR
#define MSVDX_VEC_H264_CR_VEC_H264_BE_FOC1_BOTTOMFIELDORDERCNT_CURR_MASK                (0x0001FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_FOC1_BOTTOMFIELDORDERCNT_CURR_LSBMASK             (0x0001FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_FOC1_BOTTOMFIELDORDERCNT_CURR_SHIFT               (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_OFFSET               (0x02D8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SPS0     H264_BE_SPS0_DEFAULT_MATRIX_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_H264_BE_SPS0_DEFAULT_MATRIX_FLAG_MASK                (0x00040000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_H264_BE_SPS0_DEFAULT_MATRIX_FLAG_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_H264_BE_SPS0_DEFAULT_MATRIX_FLAG_SHIFT               (18)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SPS0     H264_BE_SPS0_2PASS_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_H264_BE_SPS0_2PASS_FLAG_MASK         (0x00010000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_H264_BE_SPS0_2PASS_FLAG_LSBMASK              (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_H264_BE_SPS0_2PASS_FLAG_SHIFT                (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SPS0     BE_PROFILEIDC
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_PROFILEIDC_MASK           (0x00003000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_PROFILEIDC_LSBMASK                (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_PROFILEIDC_SHIFT          (12)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SPS0     BE_MIN_LUMA_BIPRED_SIZE_8X8
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_MIN_LUMA_BIPRED_SIZE_8X8_MASK             (0x00000800)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_MIN_LUMA_BIPRED_SIZE_8X8_LSBMASK          (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_MIN_LUMA_BIPRED_SIZE_8X8_SHIFT            (11)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SPS0     BE_DIRECT_8X8_INFERENCE_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_DIRECT_8X8_INFERENCE_FLAG_MASK            (0x00000400)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_DIRECT_8X8_INFERENCE_FLAG_LSBMASK         (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_DIRECT_8X8_INFERENCE_FLAG_SHIFT           (10)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SPS0     BE_CHROMA_FORMAT_IDC
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_CHROMA_FORMAT_IDC_MASK            (0x00000200)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_CHROMA_FORMAT_IDC_LSBMASK         (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_CHROMA_FORMAT_IDC_SHIFT           (9)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SPS0     BE_PICWIDTHINMBSLESS1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_PICWIDTHINMBSLESS1_MASK           (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_PICWIDTHINMBSLESS1_LSBMASK                (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SPS0_BE_PICWIDTHINMBSLESS1_SHIFT          (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_OFFSET               (0x02DC)

// MSVDX_VEC_H264     CR_VEC_H264_BE_PPS0     BE_SECOND_CHROMA_QP_INDEX_OFFSET
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_SECOND_CHROMA_QP_INDEX_OFFSET_MASK                (0x1F000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_SECOND_CHROMA_QP_INDEX_OFFSET_LSBMASK             (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_SECOND_CHROMA_QP_INDEX_OFFSET_SHIFT               (24)

// MSVDX_VEC_H264     CR_VEC_H264_BE_PPS0     BE_CHROMA_QP_INDEX_OFFSET
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_CHROMA_QP_INDEX_OFFSET_MASK               (0x001F0000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_CHROMA_QP_INDEX_OFFSET_LSBMASK            (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_CHROMA_QP_INDEX_OFFSET_SHIFT              (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_PPS0     BE_WEIGHTED_BIPRED_IDC
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_WEIGHTED_BIPRED_IDC_MASK          (0x00000300)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_WEIGHTED_BIPRED_IDC_LSBMASK               (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_WEIGHTED_BIPRED_IDC_SHIFT         (8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_PPS0     BE_CONSTRAINED_INTRA_PREDICTION_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_CONSTRAINED_INTRA_PREDICTION_FLAG_MASK            (0x00000002)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_CONSTRAINED_INTRA_PREDICTION_FLAG_LSBMASK         (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_PPS0_BE_CONSTRAINED_INTRA_PREDICTION_FLAG_SHIFT           (1)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_OFFSET           (0x02E0)

// MSVDX_VEC_H264     CR_VEC_H264_BE_CUR_PIC0     BE_PICHEIGHTINMBSLESS1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_PICHEIGHTINMBSLESS1_MASK              (0x00007F00)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_PICHEIGHTINMBSLESS1_LSBMASK           (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_PICHEIGHTINMBSLESS1_SHIFT             (8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_CUR_PIC0     BE_REFERENCE_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_REFERENCE_FLAG_MASK           (0x00000008)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_REFERENCE_FLAG_LSBMASK                (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_REFERENCE_FLAG_SHIFT          (3)

// MSVDX_VEC_H264     CR_VEC_H264_BE_CUR_PIC0     BE_MBAFFFRAMEFLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_MBAFFFRAMEFLAG_MASK           (0x00000004)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_MBAFFFRAMEFLAG_LSBMASK                (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_MBAFFFRAMEFLAG_SHIFT          (2)

// MSVDX_VEC_H264     CR_VEC_H264_BE_CUR_PIC0     BE_FIELD_PIC_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_FIELD_PIC_FLAG_MASK           (0x00000002)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_FIELD_PIC_FLAG_LSBMASK                (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_FIELD_PIC_FLAG_SHIFT          (1)

// MSVDX_VEC_H264     CR_VEC_H264_BE_CUR_PIC0     BE_BOTTOM_FIELD_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_BOTTOM_FIELD_FLAG_MASK                (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_BOTTOM_FIELD_FLAG_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_CUR_PIC0_BE_BOTTOM_FIELD_FLAG_SHIFT               (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_OFFSET             (0x02E4)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     BE_DIRECT_SPATIAL_MV_PRED_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_DIRECT_SPATIAL_MV_PRED_FLAG_MASK                (0x80000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_DIRECT_SPATIAL_MV_PRED_FLAG_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_DIRECT_SPATIAL_MV_PRED_FLAG_SHIFT               (31)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     H264_BE_SLICE0_SPARE30
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_SPARE30_MASK                (0x40000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_SPARE30_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_SPARE30_SHIFT               (30)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     H264_BE_SLICE0_DISABLE_DEBLOCK_FILTER_IDC
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_DISABLE_DEBLOCK_FILTER_IDC_MASK             (0x30000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_DISABLE_DEBLOCK_FILTER_IDC_LSBMASK          (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_DISABLE_DEBLOCK_FILTER_IDC_SHIFT            (28)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     H264_BE_SLICE0_ALPHA_CO_OFFSET_DIV2
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_ALPHA_CO_OFFSET_DIV2_MASK           (0x0F000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_ALPHA_CO_OFFSET_DIV2_LSBMASK                (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_ALPHA_CO_OFFSET_DIV2_SHIFT          (24)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     H264_BE_SLICE0_BETA_OFFSET_DIV2
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_BETA_OFFSET_DIV2_MASK               (0x00F00000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_BETA_OFFSET_DIV2_LSBMASK            (0x0000000F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_BETA_OFFSET_DIV2_SHIFT              (20)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     H264_BE_SLICE0_FIELD_TYPE
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_FIELD_TYPE_MASK             (0x000C0000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_FIELD_TYPE_LSBMASK          (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_FIELD_TYPE_SHIFT            (18)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     BE_SLICETYPE
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_SLICETYPE_MASK          (0x00030000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_SLICETYPE_LSBMASK               (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_SLICETYPE_SHIFT         (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     H264_BE_SLICE0_SPARE15DOWNTO14
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_SPARE15DOWNTO14_MASK                (0x0000C000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_SPARE15DOWNTO14_LSBMASK             (0x00000003)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_H264_BE_SLICE0_SPARE15DOWNTO14_SHIFT               (14)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE0     BE_SLICECOUNT
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_SLICECOUNT_MASK         (0x00003FFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_SLICECOUNT_LSBMASK              (0x00003FFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE0_BE_SLICECOUNT_SHIFT                (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_OFFSET             (0x02E8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE1     H264_BE_SLICE1_SPARE31
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_H264_BE_SLICE1_SPARE31_MASK                (0x80000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_H264_BE_SLICE1_SPARE31_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_H264_BE_SLICE1_SPARE31_SHIFT               (31)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE1     BE_FIRST_MB_IN_SLICE_Y
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_FIRST_MB_IN_SLICE_Y_MASK                (0x7F000000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_FIRST_MB_IN_SLICE_Y_LSBMASK             (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_FIRST_MB_IN_SLICE_Y_SHIFT               (24)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE1     H264_BE_SLICE1_SPARE23
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_H264_BE_SLICE1_SPARE23_MASK                (0x00800000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_H264_BE_SLICE1_SPARE23_LSBMASK             (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_H264_BE_SLICE1_SPARE23_SHIFT               (23)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE1     BE_FIRST_MB_IN_SLICE_X
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_FIRST_MB_IN_SLICE_X_MASK                (0x007F0000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_FIRST_MB_IN_SLICE_X_LSBMASK             (0x0000007F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_FIRST_MB_IN_SLICE_X_SHIFT               (16)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE1     BE_SLICEQPY
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_SLICEQPY_MASK           (0x0000FC00)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_SLICEQPY_LSBMASK                (0x0000003F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_SLICEQPY_SHIFT          (10)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE1     BE_NUM_REF_IDX_L1_ACTIVE_MINUS1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_NUM_REF_IDX_L1_ACTIVE_MINUS1_MASK               (0x000003E0)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_NUM_REF_IDX_L1_ACTIVE_MINUS1_LSBMASK            (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_NUM_REF_IDX_L1_ACTIVE_MINUS1_SHIFT              (5)

// MSVDX_VEC_H264     CR_VEC_H264_BE_SLICE1     BE_NUM_REF_IDX_L0_ACTIVE_MINUS1
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_NUM_REF_IDX_L0_ACTIVE_MINUS1_MASK               (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_NUM_REF_IDX_L0_ACTIVE_MINUS1_LSBMASK            (0x0000001F)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_SLICE1_BE_NUM_REF_IDX_L0_ACTIVE_MINUS1_SHIFT              (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_BASE_ADDR_CUR_PIC_OFFSET          (0x02EC)

// MSVDX_VEC_H264     CR_VEC_H264_BE_BASE_ADDR_CUR_PIC     CURRPIC_PARAMS_BASE_ADDRESS
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BASE_ADDR_CUR_PIC_CURRPIC_PARAMS_BASE_ADDRESS_MASK                (0xFFFFF000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BASE_ADDR_CUR_PIC_CURRPIC_PARAMS_BASE_ADDRESS_LSBMASK             (0x000FFFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BASE_ADDR_CUR_PIC_CURRPIC_PARAMS_BASE_ADDRESS_SHIFT               (12)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_REF0_OFFSET               (0x02F0)

// MSVDX_VEC_H264     CR_VEC_H264_BE_REF0     BE_LONGTERMFRAMEFLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_REF0_BE_LONGTERMFRAMEFLAG_MASK            (0x0000FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_REF0_BE_LONGTERMFRAMEFLAG_LSBMASK         (0x0000FFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_REF0_BE_LONGTERMFRAMEFLAG_SHIFT           (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_OFFSET           (0x02F4)

// MSVDX_VEC_H264     CR_VEC_H264_BE_COL_PIC0     COL_NOTFRAMEFLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_NOTFRAMEFLAG_MASK            (0x00000010)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_NOTFRAMEFLAG_LSBMASK         (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_NOTFRAMEFLAG_SHIFT           (4)

// MSVDX_VEC_H264     CR_VEC_H264_BE_COL_PIC0     COL_MBAFFFRAMEFLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_MBAFFFRAMEFLAG_MASK          (0x00000004)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_MBAFFFRAMEFLAG_LSBMASK               (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_MBAFFFRAMEFLAG_SHIFT         (2)

// MSVDX_VEC_H264     CR_VEC_H264_BE_COL_PIC0     COL_BOTTOM_FIELD_FLAG
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_BOTTOM_FIELD_FLAG_MASK               (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_BOTTOM_FIELD_FLAG_LSBMASK            (0x00000001)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_COL_PIC0_COL_BOTTOM_FIELD_FLAG_SHIFT              (0)

#define MSVDX_VEC_H264_CR_VEC_H264_BE_BASE_ADDR_COL_PIC_OFFSET          (0x02F8)

// MSVDX_VEC_H264     CR_VEC_H264_BE_BASE_ADDR_COL_PIC     COL_PIC_PARAMS_BASE_ADDRESS
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BASE_ADDR_COL_PIC_COL_PIC_PARAMS_BASE_ADDRESS_MASK                (0xFFFFF000)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BASE_ADDR_COL_PIC_COL_PIC_PARAMS_BASE_ADDRESS_LSBMASK             (0x000FFFFF)
#define MSVDX_VEC_H264_CR_VEC_H264_BE_BASE_ADDR_COL_PIC_COL_PIC_PARAMS_BASE_ADDRESS_SHIFT               (12)



#ifdef __cplusplus
}
#endif

#endif /* __MSVDX_VEC_H264_REG_IO2_H__ */
