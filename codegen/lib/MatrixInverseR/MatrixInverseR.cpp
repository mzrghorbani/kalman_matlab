//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixInverseR.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 19:15:03
//

// Include Files
#include <cmath>
#include "MatrixInverseR.h"

// Function Definitions

//
// Arguments    : const double Rmat[4]
//                double RmatInv[4]
// Return Type  : void
//
void MatrixInverseR(const double Rmat[4], double RmatInv[4])
{
  double r;
  double t;
  if (std::abs(Rmat[1]) > std::abs(Rmat[0])) {
    r = Rmat[0] / Rmat[1];
    t = 1.0 / (r * Rmat[3] - Rmat[2]);
    RmatInv[0] = Rmat[3] / Rmat[1] * t;
    RmatInv[1] = -t;
    RmatInv[2] = -Rmat[2] / Rmat[1] * t;
    RmatInv[3] = r * t;
  } else {
    r = Rmat[1] / Rmat[0];
    t = 1.0 / (Rmat[3] - r * Rmat[2]);
    RmatInv[0] = Rmat[3] / Rmat[0] * t;
    RmatInv[1] = -r * t;
    RmatInv[2] = -Rmat[2] / Rmat[0] * t;
    RmatInv[3] = t;
  }
}

//
// File trailer for MatrixInverseR.cpp
//
// [EOF]
//
