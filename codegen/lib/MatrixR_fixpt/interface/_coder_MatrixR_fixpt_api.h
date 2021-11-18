/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixR_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:35:34
 */

#ifndef _CODER_MATRIXR_FIXPT_API_H
#define _CODER_MATRIXR_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixR_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixR_fixpt(uint16_T V[4], int16_T H[8], int16_T St[8], uint16_T
  Rmat[4]);
extern void MatrixR_fixpt_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixR_fixpt_atexit(void);
extern void MatrixR_fixpt_initialize(void);
extern void MatrixR_fixpt_terminate(void);
extern void MatrixR_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixR_fixpt_api.h
 *
 * [EOF]
 */
