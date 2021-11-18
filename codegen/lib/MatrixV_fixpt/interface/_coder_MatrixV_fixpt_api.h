/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixV_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 15-Aug-2018 15:10:02
 */

#ifndef _CODER_MATRIXV_FIXPT_API_H
#define _CODER_MATRIXV_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixV_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixV_fixpt(uint16_T r, int16_T z, uint16_T inv2R, int16_T tanL,
  uint16_T V[4]);
extern void MatrixV_fixpt_api(const mxArray * const prhs[4], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixV_fixpt_atexit(void);
extern void MatrixV_fixpt_initialize(void);
extern void MatrixV_fixpt_terminate(void);
extern void MatrixV_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixV_fixpt_api.h
 *
 * [EOF]
 */
