//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixV_fixpt.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 15-Aug-2018 15:10:02
//

// Include Files
#include <string.h>
#include "MatrixV_fixpt.h"

// Function Declarations
static unsigned char PitchOverR_2_s1();

// Function Definitions

//
// Arguments    : void
// Return Type  : unsigned char
//
static unsigned char PitchOverR_2_s1()
{
  unsigned short get[512];
  memset(&get[0], 0, sizeof(unsigned short) << 9);
  return 0U;
}

//
// Arguments    : unsigned short r
//                short z
//                unsigned short inv2R
//                short tanL
//                unsigned short V[4]
// Return Type  : void
//
void MatrixV_fixpt(unsigned short r, short z, unsigned short, short tanL,
                   unsigned short V[4])
{
  unsigned char pitchPSoverR_2;
  unsigned short get[512];
  short absZ;
  boolean_T b_absZ;
  unsigned short b0;

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  //                                                                           % 
  //            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % 
  //                                                                           % 
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  V[1] = 0U;
  V[2] = 0U;
  pitchPSoverR_2 = PitchOverR_2_s1();
  memset(&get[0], 0, sizeof(unsigned short) << 9);
  absZ = z;
  if (z < 0) {
    if ((z & 8192) != 0) {
      absZ = (short)-(z | -8192);
    } else {
      absZ = (short)-(z & 8191);
    }

    if ((absZ & 8192) != 0) {
      absZ = (short)(absZ | -8192);
    } else {
      absZ = (short)(absZ & 8191);
    }

    if ((absZ & 4096) != 0) {
      absZ = (short)(absZ | -4096);
    } else {
      absZ = (short)(absZ & 4095);
    }
  }

  if ((absZ << 5) < 39751) {
    if (((unsigned int)r << 6) < 38161U) {
      absZ = 310;
    } else {
      // F2F: No information found for converting the following block of code
      // F2F: Start block
      pitchPSoverR_2 = 0U;
      absZ = 7373;

      // F2F: End block
    }

    b0 = 0U;
  } else {
    if ((absZ << 5) < 54062) {
      b_absZ = (((unsigned int)r << 6) < 42231U);
    } else {
      b_absZ = (((unsigned int)r << 6) < 41087U);
    }

    if (b_absZ) {
      absZ = (short)((39763 * tanL) >> 20);
      b0 = 50183U;
    } else {
      pitchPSoverR_2 = 0U;
      absZ = (short)((58987 * tanL) >> 16);
      b0 = 50183U;
    }
  }

  V[0] = (unsigned short)((((((unsigned int)pitchPSoverR_2 << 7) + b0) << 7) +
    52640U) >> 10);
  V[3] = (unsigned short)((absZ * absZ) >> 14);
}

//
// File trailer for MatrixV_fixpt.cpp
//
// [EOF]
//