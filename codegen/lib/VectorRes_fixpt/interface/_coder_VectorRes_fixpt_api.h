/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_VectorRes_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 15:01:48
 */

#ifndef _CODER_VECTORRES_FIXPT_API_H
#define _CODER_VECTORRES_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_VectorRes_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void VectorRes_fixpt(int16_T m[2], int16_T H[8], int16_T x[4], int16_T
  res[2]);
extern void VectorRes_fixpt_api(const mxArray * const prhs[3], int32_T nlhs,
  const mxArray *plhs[1]);
extern void VectorRes_fixpt_atexit(void);
extern void VectorRes_fixpt_initialize(void);
extern void VectorRes_fixpt_terminate(void);
extern void VectorRes_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_VectorRes_fixpt_api.h
 *
 * [EOF]
 */
