/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixK_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:58:39
 */

#ifndef _CODER_MATRIXK_FIXPT_API_H
#define _CODER_MATRIXK_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixK_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixK_fixpt(int16_T St[8], uint16_T RmatInv[4], int16_T K[8]);
extern void MatrixK_fixpt_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixK_fixpt_atexit(void);
extern void MatrixK_fixpt_initialize(void);
extern void MatrixK_fixpt_terminate(void);
extern void MatrixK_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixK_fixpt_api.h
 *
 * [EOF]
 */
