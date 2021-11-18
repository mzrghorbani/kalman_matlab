//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixC_1.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 19:48:05
//

// Include Files
#include <string.h>
#include "MatrixC_1.h"

// Function Definitions

//
// Arguments    : const double C[16]
//                const double K[8]
//                const double S[8]
//                double C_new[16]
// Return Type  : void
//
void MatrixC_1(const double C[16], const double K[8], const double S[8], double
               C_new[16])
{
  int i0;
  int i1;
  double d0_tmp;
  int C_new_tmp;
  memset(&C_new[0], 0, sizeof(double) << 4);
  for (i0 = 0; i0 < 4; i0++) {
    for (i1 = 0; i1 < 4; i1++) {
      d0_tmp = (double)((unsigned long)i1 << 1UL);
      C_new_tmp = (int)((1.0 + (double)i0) + (double)((unsigned long)i1 << 2UL))
        - 1;
      C_new[C_new_tmp] = C[C_new_tmp] - (K[(i0 + 1) - 1] * S[(int)(1.0 + d0_tmp)
        - 1] + K[(int)((1.0 + (double)i0) + 4.0) - 1] * S[(int)(2.0 + d0_tmp) -
        1]);
    }
  }
}

//
// File trailer for MatrixC_1.cpp
//
// [EOF]
//
