/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_VectorM_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 10-Aug-2018 16:17:18
 */

#ifndef _CODER_VECTORM_FIXPT_API_H
#define _CODER_VECTORM_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_VectorM_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void VectorM_fixpt(int16_T phiS, int16_T z, int16_T m[2]);
extern void VectorM_fixpt_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[1]);
extern void VectorM_fixpt_atexit(void);
extern void VectorM_fixpt_initialize(void);
extern void VectorM_fixpt_terminate(void);
extern void VectorM_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_VectorM_fixpt_api.h
 *
 * [EOF]
 */
