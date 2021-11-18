/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixC_1_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 06-Jul-2018 19:48:05
 */

#ifndef _CODER_MATRIXC_1_API_H
#define _CODER_MATRIXC_1_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixC_1_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixC_1(real_T C[16], real_T K[8], real_T S[8], real_T C_new[16]);
extern void MatrixC_1_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixC_1_atexit(void);
extern void MatrixC_1_initialize(void);
extern void MatrixC_1_terminate(void);
extern void MatrixC_1_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixC_1_api.h
 *
 * [EOF]
 */
