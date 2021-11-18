/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_VectorX_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 06-Jul-2018 19:33:18
 */

#ifndef _CODER_VECTORX_API_H
#define _CODER_VECTORX_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_VectorX_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void VectorX(real_T inv2R, real_T phi0, real_T tanL, real_T z0, real_T x
                    [4]);
extern void VectorX_api(const mxArray * const prhs[4], int32_T nlhs, const
  mxArray *plhs[1]);
extern void VectorX_atexit(void);
extern void VectorX_initialize(void);
extern void VectorX_terminate(void);
extern void VectorX_xil_terminate(void);

#endif

/*
 * File trailer for _coder_VectorX_api.h
 *
 * [EOF]
 */
