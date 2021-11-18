//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: VectorX_1.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 19:26:17
//

// Include Files
#include "VectorX_1.h"

// Function Definitions

//
// Arguments    : const double x[4]
//                const double K[8]
//                const double res[2]
//                double x_new[4]
// Return Type  : void
//
void VectorX_1(const double x[4], const double K[8], const double res[2], double
               x_new[4])
{
  int i0;
  for (i0 = 0; i0 < 4; i0++) {
    x_new[i0] = x[i0] + (K[(i0 + 1) - 1] * res[0] + K[(int)((1.0 + (double)i0) +
      4.0) - 1] * res[1]);
  }
}

//
// File trailer for VectorX_1.cpp
//
// [EOF]
//
