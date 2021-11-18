/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixV_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 10-Aug-2018 15:58:56
 */

#ifndef _CODER_MATRIXV_API_H
#define _CODER_MATRIXV_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixV_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixV(real_T r, real_T z, real_T inv2R, real_T tanL, real_T V[4]);
extern void MatrixV_api(const mxArray * const prhs[4], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixV_atexit(void);
extern void MatrixV_initialize(void);
extern void MatrixV_terminate(void);
extern void MatrixV_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixV_api.h
 *
 * [EOF]
 */
