//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixS.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 18:44:15
//

// Include Files
#include <string.h>
#include "MatrixS.h"

// Function Definitions

//
// Arguments    : const double H[8]
//                const double C[16]
//                double S[8]
// Return Type  : void
//
void MatrixS(const double H[8], const double C[16], double S[8])
{
  int i0;
  int i1;
  int S_tmp;
  double b_S_tmp;
  memset(&S[0], 0, sizeof(double) << 3);
  for (i0 = 0; i0 < 2; i0++) {
    for (i1 = 0; i1 < 4; i1++) {
      S_tmp = (int)((1.0 + (double)i0) + (double)((unsigned long)i1 << 1UL)) - 1;
      S[S_tmp] = 0.0;
      b_S_tmp = (double)((unsigned long)i1 << 2UL);
      S[S_tmp] += H[(i0 + 1) - 1] * C[(int)(1.0 + b_S_tmp) - 1];
      S[S_tmp] += H[(int)((1.0 + (double)i0) + 2.0) - 1] * C[(int)(2.0 + b_S_tmp)
        - 1];
      S[S_tmp] += H[(int)((1.0 + (double)i0) + 4.0) - 1] * C[(int)(3.0 + b_S_tmp)
        - 1];
      S[S_tmp] += H[(int)((1.0 + (double)i0) + 6.0) - 1] * C[(int)(4.0 + b_S_tmp)
        - 1];
    }
  }
}

//
// File trailer for MatrixS.cpp
//
// [EOF]
//
