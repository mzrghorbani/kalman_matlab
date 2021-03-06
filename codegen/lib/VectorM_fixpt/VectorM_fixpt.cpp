//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: VectorM_fixpt.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 10-Aug-2018 16:17:18
//

// Include Files
#include "VectorM_fixpt.h"

// Function Definitions

//
// Arguments    : short phiS
//                short z
//                short m[2]
// Return Type  : void
//
void VectorM_fixpt(short phiS, short z, short m[2])
{
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  //                                                                           % 
  //            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % 
  //                                                                           % 
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  if ((phiS & 4096) != 0) {
    m[0] = (short)(phiS | -4096);
  } else {
    m[0] = (short)(phiS & 4095);
  }

  m[1] = z;
}

//
// File trailer for VectorM_fixpt.cpp
//
// [EOF]
//
