//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixV.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 10-Aug-2018 15:58:56
//

// Include Files
#include "MatrixV.h"
#include "PitchOverR.h"

// Function Definitions

//
// Arguments    : double r
//                double z
//                double inv2R
//                double tanL
//                double V[4]
// Return Type  : void
//
void MatrixV(double r, double z, double inv2R, double tanL, double V[4])
{
  double pitchPSoverR;
  double pitch2SoverR;
  double absZ;
  boolean_T b_absZ;
  V[1] = 0.0;
  V[2] = 0.0;
  pitchPSoverR = PitchOverR(592.47943413231394, r);
  pitch2SoverR = PitchOverR(532.63302664420132, r);
  absZ = z;
  if (z < 0.0) {
    absZ = -z;
  }

  if (absZ < 1242.25) {
    if (r < 596.28000000000009) {
      pitch2SoverR = pitchPSoverR;
      absZ = 0.606762229725;
    } else {
      absZ = 14.401637793;
    }

    pitchPSoverR = 0.0;
  } else {
    if (absZ < 1689.46) {
      b_absZ = (r < 659.8832000000001);
    } else {
      b_absZ = (r < 641.99479999999994);
    }

    if (b_absZ) {
      pitch2SoverR = pitchPSoverR;
      pitchPSoverR = 0.63710034121125 * inv2R;
      absZ = 0.54608600675250007 * tanL;
    } else {
      pitchPSoverR = 15.121719682650001 * inv2R;
      absZ = 12.9614740137 * tanL;
    }
  }

  V[0] = pitch2SoverR * pitch2SoverR + pitchPSoverR * pitchPSoverR;
  V[3] = absZ * absZ;
}

//
// File trailer for MatrixV.cpp
//
// [EOF]
//
