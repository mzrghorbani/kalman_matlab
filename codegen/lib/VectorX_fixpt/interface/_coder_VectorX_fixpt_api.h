/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_VectorX_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 10-Aug-2018 16:33:54
 */

#ifndef _CODER_VECTORX_FIXPT_API_H
#define _CODER_VECTORX_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_VectorX_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void VectorX_fixpt(uint16_T inv2R, uint16_T phi0, int16_T tanL, int16_T
  z0, int16_T x[4]);
extern void VectorX_fixpt_api(const mxArray * const prhs[4], int32_T nlhs, const
  mxArray *plhs[1]);
extern void VectorX_fixpt_atexit(void);
extern void VectorX_fixpt_initialize(void);
extern void VectorX_fixpt_terminate(void);
extern void VectorX_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_VectorX_fixpt_api.h
 *
 * [EOF]
 */
