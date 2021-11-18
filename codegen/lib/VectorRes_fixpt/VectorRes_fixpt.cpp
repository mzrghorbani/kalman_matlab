//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: VectorRes_fixpt.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 28-Jun-2018 15:01:48
//

// Include Files
#include "VectorRes_fixpt.h"

// Function Definitions

//
// Arguments    : const short m[2]
//                const short H[8]
//                const short x[4]
//                short res[2]
// Return Type  : void
//
void VectorRes_fixpt(const short m[2], const short H[8], const short x[4], short
                     res[2])
{
  int i0;
  int b_i0;
  short d0;
  int b_d0;
  int i1;
  int c_d0;
  int i2;
  int d_d0;
  int i3;
  int i4;
  int e_d0;
  int i5;

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  //                                                                           % 
  //            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % 
  //                                                                           % 
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  for (i0 = 0; i0 < 2; i0++) {
    b_i0 = H[i0] * x[0];
    if ((b_i0 & 67108864) != 0) {
      b_i0 |= -67108864;
    } else {
      b_i0 &= 67108863;
    }

    if ((b_i0 & 134217728) != 0) {
      b_i0 |= -134217728;
    } else {
      b_i0 &= 134217727;
    }

    if ((b_i0 & 134217728) != 0) {
      d0 = (short)(b_i0 | -134217728);
    } else {
      d0 = (short)(b_i0 & 134217727);
    }

    b_i0 = H[i0 + 2] * x[1];
    if ((b_i0 & 67108864) != 0) {
      b_i0 |= -67108864;
    } else {
      b_i0 &= 67108863;
    }

    if ((d0 & 134217728) != 0) {
      b_d0 = d0 | -134217728;
    } else {
      b_d0 = d0 & 134217727;
    }

    if ((b_i0 & 134217728) != 0) {
      i1 = b_i0 | -134217728;
    } else {
      i1 = b_i0 & 134217727;
    }

    b_i0 = b_d0 + i1;
    if ((b_i0 & 134217728) != 0) {
      d0 = (short)(b_i0 | -134217728);
    } else {
      d0 = (short)(b_i0 & 134217727);
    }

    b_i0 = H[i0] * x[2];
    if ((b_i0 & 67108864) != 0) {
      b_i0 |= -67108864;
    } else {
      b_i0 &= 67108863;
    }

    if ((d0 & 134217728) != 0) {
      c_d0 = d0 | -134217728;
    } else {
      c_d0 = d0 & 134217727;
    }

    if ((b_i0 & 134217728) != 0) {
      i2 = b_i0 | -134217728;
    } else {
      i2 = b_i0 & 134217727;
    }

    b_i0 = c_d0 + i2;
    if ((b_i0 & 134217728) != 0) {
      d0 = (short)(b_i0 | -134217728);
    } else {
      d0 = (short)(b_i0 & 134217727);
    }

    b_i0 = H[i0 + 2] * x[3];
    if ((b_i0 & 67108864) != 0) {
      b_i0 |= -67108864;
    } else {
      b_i0 &= 67108863;
    }

    if ((d0 & 134217728) != 0) {
      d_d0 = d0 | -134217728;
    } else {
      d_d0 = d0 & 134217727;
    }

    if ((b_i0 & 134217728) != 0) {
      i3 = b_i0 | -134217728;
    } else {
      i3 = b_i0 & 134217727;
    }

    b_i0 = d_d0 + i3;
    if ((b_i0 & 134217728) != 0) {
      d0 = (short)(b_i0 | -134217728);
    } else {
      d0 = (short)(b_i0 & 134217727);
    }

    b_i0 = m[i0] << 3;
    if ((b_i0 & 65536) != 0) {
      i4 = b_i0 | -65536;
    } else {
      i4 = b_i0 & 65535;
    }

    if ((d0 & 65536) != 0) {
      e_d0 = d0 | -65536;
    } else {
      e_d0 = d0 & 65535;
    }

    b_i0 = i4 - e_d0;
    if ((b_i0 & 65536) != 0) {
      i5 = b_i0 | -65536;
    } else {
      i5 = b_i0 & 65535;
    }

    res[i0] = (short)((short)i5 << 6);
  }
}

//
// File trailer for VectorRes_fixpt.cpp
//
// [EOF]
//
