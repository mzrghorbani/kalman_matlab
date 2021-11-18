//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixS_transpose.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 09-Jul-2018 15:32:49
//

// Include Files
#include <string.h>
#include "MatrixS_transpose.h"

// Function Definitions

//
// Arguments    : const double S[8]
//                double St[8]
// Return Type  : void
//
void MatrixS_transpose(const double S[8], double St[8])
{
  int i0;
  double St_tmp;
  memset(&St[0], 0, sizeof(double) << 3);
  for (i0 = 0; i0 < 2; i0++) {
    St_tmp = (double)((unsigned long)i0 << 2UL);
    St[(int)(1.0 + St_tmp) - 1] = S[(i0 + 1) - 1];
    St[(int)(2.0 + St_tmp) - 1] = S[(int)((1.0 + (double)i0) + 2.0) - 1];
    St[(int)(3.0 + St_tmp) - 1] = S[(int)((1.0 + (double)i0) + 4.0) - 1];
    St[(int)(4.0 + St_tmp) - 1] = S[(int)((1.0 + (double)i0) + 6.0) - 1];
  }
}

//
// File trailer for MatrixS_transpose.cpp
//
// [EOF]
//
