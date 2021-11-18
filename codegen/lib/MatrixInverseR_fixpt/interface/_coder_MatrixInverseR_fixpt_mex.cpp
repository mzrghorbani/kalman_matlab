/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixInverseR_fixpt_mex.cpp
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:52:48
 */

/* Include Files */
#include "_coder_MatrixInverseR_fixpt_api.h"
#include "_coder_MatrixInverseR_fixpt_mex.h"

/* Function Declarations */
static void c_MatrixInverseR_fixpt_mexFunct(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_MatrixInverseR_fixpt_mexFunct(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        20, "MatrixInverseR_fixpt");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "MatrixInverseR_fixpt");
  }

  /* Call the function. */
  MatrixInverseR_fixpt_api(prhs, nlhs, outputs);

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
  mexAtExit(MatrixInverseR_fixpt_atexit);

  /* Module initialization. */
  MatrixInverseR_fixpt_initialize();

  /* Dispatch the entry-point. */
  c_MatrixInverseR_fixpt_mexFunct(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  MatrixInverseR_fixpt_terminate();
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
 * File trailer for _coder_MatrixInverseR_fixpt_mex.cpp
 *
 * [EOF]
 */
