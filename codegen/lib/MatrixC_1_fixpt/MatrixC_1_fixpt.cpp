//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixC_1_fixpt.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 28-Jun-2018 15:06:59
//

// Include Files
#include <cmath>
#include "rt_nonfinite.h"
#include "MatrixC_1_fixpt.h"

// Function Definitions

//
// Arguments    : const short C[16]
//                const short K[8]
//                const short S[8]
//                short C_new[16]
// Return Type  : void
//
void MatrixC_1_fixpt(const short C[16], const short K[8], const short S[8],
                     short C_new[16])
{
  int i;
  int i1;
  double d0;
  double d1;
  long i0;
  long b_i1;
  long i2;
  long i3;
  long i4;
  long i5;
  short b_d0;
  double d2;
  int i6;
  int i7;
  int c_d0;
  int i8;

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  //                                                                           % 
  //            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % 
  //                                                                           % 
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  for (i = 0; i < 16; i++) {
    C_new[i] = 0;
  }

  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < 4; i1++) {
      d0 = std::floor((double)((unsigned long)i1 << 1UL));
      if (rtIsNaN(d0) || rtIsInf(d0)) {
        d1 = 0.0;
      } else {
        d1 = std::fmod(d0, 4.0);
      }

      i0 = K[i] * S[(unsigned char)(signed char)d1 & 3];
      if ((i0 & 4294967296L) != 0L) {
        i0 |= -4294967296L;
      } else {
        i0 &= 4294967295L;
      }

      if ((i0 & 4294967296L) != 0L) {
        b_i1 = i0 | -4294967296L;
      } else {
        b_i1 = i0 & 4294967295L;
      }

      i0 = (long)(short)(b_i1 >> 14) << 14;
      if (rtIsNaN(d0) || rtIsInf(d0)) {
        d0 = 0.0;
      } else {
        d0 = std::fmod(d0, 4.0);
      }

      i2 = K[i + 4] * S[((unsigned char)(signed char)d0 & 3) + 1];
      if ((i0 & 4294967296L) != 0L) {
        i3 = i0 | -4294967296L;
      } else {
        i3 = i0 & 4294967295L;
      }

      if ((i2 & 4294967296L) != 0L) {
        i4 = i2 | -4294967296L;
      } else {
        i4 = i2 & 4294967295L;
      }

      i0 = i3 + i4;
      if ((i0 & 4294967296L) != 0L) {
        i5 = i0 | -4294967296L;
      } else {
        i5 = i0 & 4294967295L;
      }

      b_d0 = (short)(i5 >> 14);
      d2 = std::floor((double)((unsigned long)i1 << 2UL));
      if (rtIsNaN(d2) || rtIsInf(d2)) {
        d0 = 0.0;
        d2 = 0.0;
      } else {
        d0 = std::fmod(d2, 8.0);
        d2 = std::fmod(d2, 8.0);
      }

      i6 = C[(int)((unsigned int)(1 + i) + ((unsigned char)(signed char)d2 & 7))
        - 1];
      if ((i6 & 65536) != 0) {
        i7 = i6 | -65536;
      } else {
        i7 = i6 & 65535;
      }

      if ((b_d0 & 65536) != 0) {
        c_d0 = b_d0 | -65536;
      } else {
        c_d0 = b_d0 & 65535;
      }

      i6 = i7 - c_d0;
      if ((i6 & 65536) != 0) {
        i8 = i6 | -65536;
      } else {
        i8 = i6 & 65535;
      }

      C_new[(int)((unsigned int)(1 + i) + ((unsigned char)(signed char)d0 & 7))
        - 1] = (short)((short)i8 << 3);
    }
  }
}

//
// File trailer for MatrixC_1_fixpt.cpp
//
// [EOF]
//