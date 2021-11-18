/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixC_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 09-Jul-2018 15:46:21
 */

#ifndef _CODER_MATRIXC_API_H
#define _CODER_MATRIXC_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MatrixC_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void MatrixC(real_T c00, real_T c11, real_T c22, real_T c33, real_T c01,
                    real_T c23, real_T C[16]);
extern void MatrixC_api(const mxArray * const prhs[6], int32_T nlhs, const
  mxArray *plhs[1]);
extern void MatrixC_atexit(void);
extern void MatrixC_initialize(void);
extern void MatrixC_terminate(void);
extern void MatrixC_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MatrixC_api.h
 *
 * [EOF]
 */
