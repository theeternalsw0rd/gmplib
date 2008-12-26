/* "Core 2" gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,
2008 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

/* 2133 MHz "Core 2" / 65nm / 4096 Kibyte cache / socket 775 */

/* Generated by tuneup.c, 2008-12-23, gcc 4.2 */

#define MUL_KARATSUBA_THRESHOLD          26
#define MUL_TOOM3_THRESHOLD              41
#define MUL_TOOM44_THRESHOLD            106

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          24
#define SQR_TOOM3_THRESHOLD              91
#define SQR_TOOM4_THRESHOLD             230

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD              52
#define MULLOW_MUL_N_THRESHOLD          290

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 54
#define POWM_THRESHOLD                   81

#define MATRIX22_STRASSEN_THRESHOLD      19
#define HGCD_THRESHOLD                  158
#define GCD_DC_THRESHOLD                534
#define GCDEXT_DC_THRESHOLD             486
#define JACOBI_BASE_METHOD                1

#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             11
#define GET_STR_PRECOMPUTE_THRESHOLD     16
#define SET_STR_DC_THRESHOLD            134
#define SET_STR_PRECOMPUTE_THRESHOLD   2089

#define MUL_FFT_TABLE  { 336, 672, 1600, 2816, 7168, 20480, 81920, 458752, 0 }
#define MUL_FFT_MODF_THRESHOLD          352
#define MUL_FFT_THRESHOLD              1920

#define SQR_FFT_TABLE  { 304, 672, 1600, 3328, 7168, 20480, 49152, 327680, 0 }
#define SQR_FFT_MODF_THRESHOLD          320
#define SQR_FFT_THRESHOLD              1920
