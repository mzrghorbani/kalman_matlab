/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixC_api.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 09-Jul-2018 15:46:21
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_MatrixC_api.h"
#include "_coder_MatrixC_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "MatrixC",                           /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *c00, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u[16]);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "double",
    false, 0U, (int32_T *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *c00
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *c00, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(c00), &thisId);
  emlrtDestroyArray(&c00);
  return y;
}

/*
 * Arguments    : const real_T u[16]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real_T u[16])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[1] = { 0 };

  static const int32_T iv1[1] = { 16 };

  y = NULL;
  m0 = emlrtCreateNumericArray(1, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, *(int32_T (*)[1])&iv1[0], 1);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const mxArray * const prhs[6]
 *                int32_T nlhs
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void MatrixC_api(const mxArray * const prhs[6], int32_T nlhs, const mxArray
                 *plhs[1])
{
  real_T (*C)[16];
  real_T c00;
  real_T c11;
  real_T c22;
  real_T c33;
  real_T c01;
  real_T c23;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  C = (real_T (*)[16])mxMalloc(sizeof(real_T [16]));

  /* Marshall function inputs */
  c00 = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "c00");
  c11 = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "c11");
  c22 = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "c22");
  c33 = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "c33");
  c01 = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "c01");
  c23 = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "c23");

  /* Invoke the target function */
  MatrixC(c00, c11, c22, c33, c01, c23, *C);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*C);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixC_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  MatrixC_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixC_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixC_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_MatrixC_api.c
 *
 * [EOF]
 */
