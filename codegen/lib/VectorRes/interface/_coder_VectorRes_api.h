/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_VectorRes_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 06-Jul-2018 19:21:57
 */

#ifndef _CODER_VECTORRES_API_H
#define _CODER_VECTORRES_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_VectorRes_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void VectorRes(real_T m[2], real_T H[8], real_T x[4], real_T res[2]);
extern void VectorRes_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[1]);
extern void VectorRes_atexit(void);
extern void VectorRes_initialize(void);
extern void VectorRes_terminate(void);
extern void VectorRes_xil_terminate(void);

#endif

/*
 * File trailer for _coder_VectorRes_api.h
 *
 * [EOF]
 */
