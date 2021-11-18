//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixK.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 19:19:16
//

// Include Files
#include <string.h>
#include "MatrixK.h"

// Function Definitions

//
// Arguments    : const double St[8]
//                const double RmatInv[4]
//                double K[8]
// Return Type  : void
//
void MatrixK(const double St[8], const double RmatInv[4], double K[8])
{
  int i0;
  int K_tmp;
  int b_K_tmp;
  memset(&K[0], 0, sizeof(double) << 3);
  for (i0 = 0; i0 < 4; i0++) {
    K_tmp = (i0 + 1) - 1;
    K[K_tmp] = 0.0;
    K[K_tmp] += St[K_tmp] * RmatInv[0];
    b_K_tmp = (int)((1.0 + (double)i0) + 4.0) - 1;
    K[K_tmp] += St[b_K_tmp] * RmatInv[1];
    K[b_K_tmp] = 0.0;
    K[b_K_tmp] += St[(i0 + 1) - 1] * RmatInv[2];
    K[b_K_tmp] += St[(int)((1.0 + (double)i0) + 4.0) - 1] * RmatInv[3];
  }
}

//
// File trailer for MatrixK.cpp
//
// [EOF]
//
