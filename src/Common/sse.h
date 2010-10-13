/**
 * @brief SSE for high performance vector operations
 *
 * This file is a part of LuminanceHDR package
 * ---------------------------------------------------------------------- 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * ---------------------------------------------------------------------- 
 * 
 * @author Davide Anastasia, <davide.anastasia@gmail.com>
 *
 */

#ifndef __LUMINANCE_SSE_H__
#define __LUMINANCE_SSE_H__

//#if __ppc__ || __ppc7400__ || __ppc64__ || __ppc970__
//#include <ppc_intrinsics.h>
#if __i386__ || __x86_64__
//#include <pmmintrin.h>
//#include <tmmintrin.h>
#include <mm_malloc.h>
#else
#error unsupported architecture
#endif

#ifdef __APPLE__
#include <Accelerate/Accelerate.h>
#endif

//const __m128 ZERO = _mm_setzero_ps();

//void mm_3x3(float i1, float i2, float i3, float &o1, float &o2, float &o3, const float mat[3][3]);

#endif