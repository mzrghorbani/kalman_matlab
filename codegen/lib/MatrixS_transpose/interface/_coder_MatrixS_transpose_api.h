/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixS_transpose_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 09-Jul-2018 15:32:49
 */

#ifndef _CODER_MATRIXS_TRANSPOSE_API_H
#define _CODER_MATRIXS_TRANSPOSE_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixS_transpose_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixS_transpose(real_T S[8], real_T St[8]);
extern void MatrixS_transpose_api(const mxArray * const prhs[1], int32_T nlhs,
  const mxArray *plhs[1]);
extern void MatrixS_transpose_atexit(void);
extern void MatrixS_transpose_initialize(void);
extern void MatrixS_transpose_terminate(void);
extern void MatrixS_transpose_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixS_transpose_api.h
 *
 * [EOF]
 */
