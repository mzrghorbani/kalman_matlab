//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixR.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 19:01:22
//

// Include Files
#include "MatrixR.h"

// Function Definitions

//
// Arguments    : const double V[4]
//                const double H[8]
//                const double St[8]
//                double Rmat[4]
// Return Type  : void
//
void MatrixR(const double V[4], const double H[8], const double St[8], double
             Rmat[4])
{
  int i0;
  int i1;
  double d0_tmp;
  int Rmat_tmp;
  Rmat[0] = 0.0;
  Rmat[1] = 0.0;
  Rmat[2] = 0.0;
  Rmat[3] = 0.0;
  for (i0 = 0; i0 < 2; i0++) {
    for (i1 = 0; i1 < 2; i1++) {
      d0_tmp = (double)((unsigned long)i1 << 2UL);
      Rmat_tmp = (int)((1.0 + (double)i0) + (double)((unsigned long)i1 << 1UL))
        - 1;
      Rmat[Rmat_tmp] = V[Rmat_tmp] + (((H[(i0 + 1) - 1] * St[(int)(1.0 + d0_tmp)
        - 1] + H[(int)((1.0 + (double)i0) + 2.0) - 1] * St[(int)(2.0 + d0_tmp) -
        1]) + H[(int)((1.0 + (double)i0) + 4.0) - 1] * St[(int)(3.0 + d0_tmp) -
        1]) + H[(int)((1.0 + (double)i0) + 6.0) - 1] * St[(int)(4.0 + d0_tmp) -
        1]);
    }
  }
}

//
// File trailer for MatrixR.cpp
//
// [EOF]
//
