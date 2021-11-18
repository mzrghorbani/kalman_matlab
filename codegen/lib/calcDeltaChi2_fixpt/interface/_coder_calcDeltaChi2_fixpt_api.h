/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_calcDeltaChi2_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 15:10:10
 */

#ifndef _CODER_CALCDELTACHI2_FIXPT_API_H
#define _CODER_CALCDELTACHI2_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_calcDeltaChi2_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern uint16_T calcDeltaChi2_fixpt(int16_T res[2], uint16_T RmatInv[4]);
extern void calcDeltaChi2_fixpt_api(const mxArray * const prhs[2], int32_T nlhs,
  const mxArray *plhs[1]);
extern void calcDeltaChi2_fixpt_atexit(void);
extern void calcDeltaChi2_fixpt_initialize(void);
extern void calcDeltaChi2_fixpt_terminate(void);
extern void calcDeltaChi2_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_calcDeltaChi2_fixpt_api.h
 *
 * [EOF]
 */
