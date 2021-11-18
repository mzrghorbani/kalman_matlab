/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_VectorX_fixpt_mex.cpp
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 10-Aug-2018 16:33:54
 */

/* Include Files */
#include "_coder_VectorX_fixpt_api.h"
#include "_coder_VectorX_fixpt_mex.h"

/* Function Declarations */
static void VectorX_fixpt_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[4]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[4]
 * Return Type  : void
 */
static void VectorX_fixpt_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[4])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        13, "VectorX_fixpt");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "VectorX_fixpt");
  }

  /* Call the function. */
  VectorX_fixpt_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(VectorX_fixpt_atexit);

  /* Module initialization. */
  VectorX_fixpt_initialize();

  /* Dispatch the entry-point. */
  VectorX_fixpt_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  VectorX_fixpt_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_VectorX_fixpt_mex.cpp
 *
 * [EOF]
 */
