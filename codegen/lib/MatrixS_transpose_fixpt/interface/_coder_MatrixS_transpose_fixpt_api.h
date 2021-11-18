/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixS_transpose_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:32:10
 */

#ifndef _CODER_MATRIXS_TRANSPOSE_FIXPT_API_H
#define _CODER_MATRIXS_TRANSPOSE_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixS_transpose_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixS_transpose_fixpt(int16_T S[8], int16_T St[8]);
extern void MatrixS_transpose_fixpt_api(const mxArray * const prhs[1], int32_T
  nlhs, const mxArray *plhs[1]);
extern void MatrixS_transpose_fixpt_atexit(void);
extern void MatrixS_transpose_fixpt_initialize(void);
extern void MatrixS_transpose_fixpt_terminate(void);
extern void MatrixS_transpose_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixS_transpose_fixpt_api.h
 *
 * [EOF]
 */
