/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_PitchOverR_fixpt_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 10-Aug-2018 16:44:20
 */

#ifndef _CODER_PITCHOVERR_FIXPT_API_H
#define _CODER_PITCHOVERR_FIXPT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_PitchOverR_fixpt_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern uint16_T PitchOverR_fixpt(uint16_T pitch, uint16_T r);
extern void PitchOverR_fixpt_api(const mxArray * const prhs[2], int32_T nlhs,
  const mxArray *plhs[1]);
extern void PitchOverR_fixpt_atexit(void);
extern void PitchOverR_fixpt_initialize(void);
extern void PitchOverR_fixpt_terminate(void);
extern void PitchOverR_fixpt_xil_terminate(void);

#endif

/*
 * File trailer for _coder_PitchOverR_fixpt_api.h
 *
 * [EOF]
 */
