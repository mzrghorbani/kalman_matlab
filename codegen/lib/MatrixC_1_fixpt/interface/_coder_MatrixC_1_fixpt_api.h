/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixC_1_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 15:06:59
 */

#ifndef _CODER_MATRIXC_1_FIXPT_API_H
#define _CODER_MATRIXC_1_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixC_1_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixC_1_fixpt(int16_T C[16], int16_T K[8], int16_T S[8], int16_T
  C_new[16]);
extern void MatrixC_1_fixpt_api(const mxArray * const prhs[3], int32_T nlhs,
  const mxArray *plhs[1]);
extern void MatrixC_1_fixpt_atexit(void);
extern void MatrixC_1_fixpt_initialize(void);
extern void MatrixC_1_fixpt_terminate(void);
extern void MatrixC_1_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixC_1_fixpt_api.h
 *
 * [EOF]
 */
