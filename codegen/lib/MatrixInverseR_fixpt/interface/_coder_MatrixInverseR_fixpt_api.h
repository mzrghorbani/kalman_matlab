/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixInverseR_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:52:48
 */

#ifndef _CODER_MATRIXINVERSER_FIXPT_API_H
#define _CODER_MATRIXINVERSER_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixInverseR_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixInverseR_fixpt(uint16_T Rmat[4], uint16_T RmatInv[4]);
extern void MatrixInverseR_fixpt_api(const mxArray * const prhs[1], int32_T nlhs,
  const mxArray *plhs[1]);
extern void MatrixInverseR_fixpt_atexit(void);
extern void MatrixInverseR_fixpt_initialize(void);
extern void MatrixInverseR_fixpt_terminate(void);
extern void MatrixInverseR_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixInverseR_fixpt_api.h
 *
 * [EOF]
 */
