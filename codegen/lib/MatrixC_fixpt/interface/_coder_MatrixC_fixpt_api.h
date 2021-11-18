/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixC_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:18:00
 */

#ifndef _CODER_MATRIXC_FIXPT_API_H
#define _CODER_MATRIXC_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixC_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixC_fixpt(uint16_T c00, uint16_T c11, uint16_T c22, uint16_T c33,
  uint16_T c01, int16_T c23, int16_T C[16]);
extern void MatrixC_fixpt_api(const mxArray * const prhs[6], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixC_fixpt_atexit(void);
extern void MatrixC_fixpt_initialize(void);
extern void MatrixC_fixpt_terminate(void);
extern void MatrixC_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixC_fixpt_api.h
 *
 * [EOF]
 */
