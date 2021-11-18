/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixH_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 09-Jul-2018 14:43:58
 */

#ifndef _CODER_MATRIXH_API_H
#define _CODER_MATRIXH_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixH_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixH(real_T r, real_T H[8]);
extern void MatrixH_api(const mxArray * const prhs[1], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixH_atexit(void);
extern void MatrixH_initialize(void);
extern void MatrixH_terminate(void);
extern void MatrixH_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixH_api.h
 *
 * [EOF]
 */
