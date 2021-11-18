//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixH.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 09-Jul-2018 14:43:58
//

// Include Files
#include "MatrixH.h"

// Function Definitions

//
// Arguments    : double r
//                double H[8]
// Return Type  : void
//
void MatrixH(double r, double H[8])
{
  H[0] = -r;
  H[2] = 1.0;
  H[4] = 0.0;
  H[6] = 0.0;
  H[1] = 0.0;
  H[3] = 0.0;
  H[5] = r;
  H[7] = 1.0;
}

//
// File trailer for MatrixH.cpp
//
// [EOF]
//
