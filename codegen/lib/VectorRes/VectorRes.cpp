//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: VectorRes.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 19:21:57
//

// Include Files
#include "VectorRes.h"

// Function Definitions

//
// Arguments    : const double m[2]
//                const double H[8]
//                const double x[4]
//                double res[2]
// Return Type  : void
//
void VectorRes(const double m[2], const double H[8], const double x[4], double
               res[2])
{
  int i0;
  for (i0 = 0; i0 < 2; i0++) {
    res[i0] = m[i0] - (((H[(i0 + 1) - 1] * x[0] + H[(int)((1.0 + (double)i0) +
      2.0) - 1] * x[1]) + H[(int)((1.0 + (double)i0) + 4.0) - 1] * x[2]) + H
                       [(int)((1.0 + (double)i0) + 6.0) - 1] * x[3]);
  }
}

//
// File trailer for VectorRes.cpp
//
// [EOF]
//
