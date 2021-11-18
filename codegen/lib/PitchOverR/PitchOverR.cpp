//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: PitchOverR.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 18:03:26
//

// Include Files
#include <cmath>
#include <string.h>
#include "PitchOverR.h"

// Function Declarations
static double rt_roundd_snf(double u);

// Function Definitions

//
// Arguments    : double u
// Return Type  : double
//
static double rt_roundd_snf(double u)
{
  double y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

//
// Arguments    : double pitch
//                double r
// Return Type  : double
//
double PitchOverR(double pitch, double r)
{
  double get[512];
  int n;
  memset(&get[0], 0, sizeof(double) << 9);
  for (n = 0; n < 509; n++) {
    get[n + 2] = pitch / ((double)((3UL + n) << 2UL) + 2.0);
  }

  return get[(int)rt_roundd_snf(r / 4.0) - 1];
}

//
// File trailer for PitchOverR.cpp
//
// [EOF]
//
