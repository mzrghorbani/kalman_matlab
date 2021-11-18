/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixH_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 10-Aug-2018 16:50:34
 */

#ifndef _CODER_MATRIXH_FIXPT_API_H
#define _CODER_MATRIXH_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixH_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixH_fixpt(uint16_T r, int16_T H[8]);
extern void MatrixH_fixpt_api(const mxArray * const prhs[1], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixH_fixpt_atexit(void);
extern void MatrixH_fixpt_initialize(void);
extern void MatrixH_fixpt_terminate(void);
extern void MatrixH_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixH_fixpt_api.h
 *
 * [EOF]
 */
