/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixInverseR_fixpt_api.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:52:48
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_MatrixInverseR_fixpt_api.h"
#include "_coder_MatrixInverseR_fixpt_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static const mxArray *c_eml_mx;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "MatrixInverseR_fixpt",              /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

static emlrtMCInfo emlrtMCI = { -1,    /* lineNo */
  -1,                                  /* colNo */
  "",                                  /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void MatrixInverseR_fixpt_once(const emlrtStack *sp);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint16_T y[4]);
static void c_emlrt_marshallIn(const mxArray *src, uint16_T ret[4]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Rmat, const
  char_T *identifier, uint16_T y[4]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const uint16_T u[4]);
static const mxArray *fimath(const emlrtStack *sp, const char * b, const char
  * c, const char * d, const char * e, const char * f, const char * g, const
  char * h, const char * i, const char * j, const char * k, const char * l,
  const char * m, const char * n, real_T o, const char * p, real_T q, const char
  * r, real_T s, const char * t, real_T u, const char * v, real_T w, const char *
  x, real_T y, const char * ab, real_T bb, const char * cb, real_T db, const
  char * eb, real_T fb, const char * gb, real_T hb, const char * ib, real_T jb,
  const char * kb, real_T lb, const char * mb, boolean_T nb, const char * ob,
  real_T pb, const char * qb, real_T rb, emlrtMCInfo *location);
static const mxArray *numerictype(const emlrtStack *sp, const char * b,
  boolean_T c, const char * d, const char * e, const char * f, real_T g, const
  char * h, real_T i, const char * j, real_T k, const char * l, real_T m,
  emlrtMCInfo *location);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 * Return Type  : void
 */
static void MatrixInverseR_fixpt_once(const emlrtStack *sp)
{
  emlrtAssignP(&c_eml_mx, NULL);
  emlrtAssignP(&b_eml_mx, NULL);
  emlrtAssignP(&eml_mx, NULL);
  emlrtAssignP(&c_eml_mx, numerictype(sp, "SignednessBool", false, "Signedness",
    "Unsigned", "FractionLength", 25.0, "BinaryPoint", 25.0, "Slope",
    2.9802322387695312E-8, "FixedExponent", -25.0, &emlrtMCI));
  emlrtAssignP(&b_eml_mx, numerictype(sp, "SignednessBool", false, "Signedness",
    "Unsigned", "FractionLength", 0.0, "BinaryPoint", 0.0, "Slope", 1.0,
    "FixedExponent", 0.0, &emlrtMCI));
  emlrtAssignP(&eml_mx, fimath(sp, "RoundMode", "floor", "RoundingMethod",
    "Floor", "OverflowMode", "wrap", "OverflowAction", "Wrap", "ProductMode",
    "FullPrecision", "SumMode", "FullPrecision", "ProductWordLength", 32.0,
    "SumWordLength", 32.0, "MaxProductWordLength", 128.0, "MaxSumWordLength",
    128.0, "ProductFractionLength", 30.0, "ProductFixedExponent", -30.0,
    "SumFractionLength", 30.0, "SumFixedExponent", -30.0,
    "SumSlopeAdjustmentFactor", 1.0, "SumBias", 0.0,
    "ProductSlopeAdjustmentFactor", 1.0, "ProductBias", 0.0, "CastBeforeSum",
    true, "SumSlope", 9.3132257461547852E-10, "ProductSlope",
    9.3132257461547852E-10, &emlrtMCI));
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                uint16_T y[4]
 * Return Type  : void
 */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint16_T y[4])
{
  static const int32_T dims[1] = { 4 };

  emlrtCheckFiR2012b(sp, parentId, u, false, 1U, *(int32_T (*)[1])&dims[0],
                     eml_mx, b_eml_mx);
  c_emlrt_marshallIn(emlrtAlias(u), y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const mxArray *src
 *                uint16_T ret[4]
 * Return Type  : void
 */
static void c_emlrt_marshallIn(const mxArray *src, uint16_T ret[4])
{
  const mxArray *mxInt;
  uint16_T (*r0)[4];
  mxInt = emlrtImportFiIntArrayR2008b(src);
  r0 = (uint16_T (*)[4])emlrtMxGetData(mxInt);
  ret[0] = (*r0)[0];
  ret[1] = (*r0)[1];
  ret[2] = (*r0)[2];
  ret[3] = (*r0)[3];
  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Rmat
 *                const char_T *identifier
 *                uint16_T y[4]
 * Return Type  : void
 */
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Rmat, const
  char_T *identifier, uint16_T y[4])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(Rmat), &thisId, y);
  emlrtDestroyArray(&Rmat);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const uint16_T u[4]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const uint16_T u[4])
{
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *m0;
  static const int32_T iv0[1] = { 4 };

  uint16_T *pData;
  y = NULL;
  b_y = NULL;
  m0 = emlrtCreateNumericArray(1, iv0, mxUINT16_CLASS, mxREAL);
  pData = (uint16_T *)emlrtMxGetData(m0);
  pData[0] = u[0];
  pData[1] = u[1];
  pData[2] = u[2];
  pData[3] = u[3];
  emlrtAssign(&b_y, m0);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, c_eml_mx, "simulinkarray", b_y,
    true, false));
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const char * b
 *                const char * c
 *                const char * d
 *                const char * e
 *                const char * f
 *                const char * g
 *                const char * h
 *                const char * i
 *                const char * j
 *                const char * k
 *                const char * l
 *                const char * m
 *                const char * n
 *                real_T o
 *                const char * p
 *                real_T q
 *                const char * r
 *                real_T s
 *                const char * t
 *                real_T u
 *                const char * v
 *                real_T w
 *                const char * x
 *                real_T y
 *                const char * ab
 *                real_T bb
 *                const char * cb
 *                real_T db
 *                const char * eb
 *                real_T fb
 *                const char * gb
 *                real_T hb
 *                const char * ib
 *                real_T jb
 *                const char * kb
 *                real_T lb
 *                const char * mb
 *                boolean_T nb
 *                const char * ob
 *                real_T pb
 *                const char * qb
 *                real_T rb
 *                emlrtMCInfo *location
 * Return Type  : const mxArray *
 */
static const mxArray *fimath(const emlrtStack *sp, const char * b, const char
  * c, const char * d, const char * e, const char * f, const char * g, const
  char * h, const char * i, const char * j, const char * k, const char * l,
  const char * m, const char * n, real_T o, const char * p, real_T q, const char
  * r, real_T s, const char * t, real_T u, const char * v, real_T w, const char *
  x, real_T y, const char * ab, real_T bb, const char * cb, real_T db, const
  char * eb, real_T fb, const char * gb, real_T hb, const char * ib, real_T jb,
  const char * kb, real_T lb, const char * mb, boolean_T nb, const char * ob,
  real_T pb, const char * qb, real_T rb, emlrtMCInfo *location)
{
  const mxArray *pArrays[42];
  const mxArray *m2;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateString(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateString(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateString(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateString(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateString(k);
  pArrays[10] = emlrtCreateString(l);
  pArrays[11] = emlrtCreateString(m);
  pArrays[12] = emlrtCreateString(n);
  pArrays[13] = emlrtCreateDoubleScalar(o);
  pArrays[14] = emlrtCreateString(p);
  pArrays[15] = emlrtCreateDoubleScalar(q);
  pArrays[16] = emlrtCreateString(r);
  pArrays[17] = emlrtCreateDoubleScalar(s);
  pArrays[18] = emlrtCreateString(t);
  pArrays[19] = emlrtCreateDoubleScalar(u);
  pArrays[20] = emlrtCreateString(v);
  pArrays[21] = emlrtCreateDoubleScalar(w);
  pArrays[22] = emlrtCreateString(x);
  pArrays[23] = emlrtCreateDoubleScalar(y);
  pArrays[24] = emlrtCreateString(ab);
  pArrays[25] = emlrtCreateDoubleScalar(bb);
  pArrays[26] = emlrtCreateString(cb);
  pArrays[27] = emlrtCreateDoubleScalar(db);
  pArrays[28] = emlrtCreateString(eb);
  pArrays[29] = emlrtCreateDoubleScalar(fb);
  pArrays[30] = emlrtCreateString(gb);
  pArrays[31] = emlrtCreateDoubleScalar(hb);
  pArrays[32] = emlrtCreateString(ib);
  pArrays[33] = emlrtCreateDoubleScalar(jb);
  pArrays[34] = emlrtCreateString(kb);
  pArrays[35] = emlrtCreateDoubleScalar(lb);
  pArrays[36] = emlrtCreateString(mb);
  pArrays[37] = emlrtCreateLogicalScalar(nb);
  pArrays[38] = emlrtCreateString(ob);
  pArrays[39] = emlrtCreateDoubleScalar(pb);
  pArrays[40] = emlrtCreateString(qb);
  pArrays[41] = emlrtCreateDoubleScalar(rb);
  return emlrtCallMATLABR2012b(sp, 1, &m2, 42, pArrays, "fimath", true, location);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const char * b
 *                boolean_T c
 *                const char * d
 *                const char * e
 *                const char * f
 *                real_T g
 *                const char * h
 *                real_T i
 *                const char * j
 *                real_T k
 *                const char * l
 *                real_T m
 *                emlrtMCInfo *location
 * Return Type  : const mxArray *
 */
static const mxArray *numerictype(const emlrtStack *sp, const char * b,
  boolean_T c, const char * d, const char * e, const char * f, real_T g, const
  char * h, real_T i, const char * j, real_T k, const char * l, real_T m,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[12];
  const mxArray *m1;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateLogicalScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateString(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateDoubleScalar(k);
  pArrays[10] = emlrtCreateString(l);
  pArrays[11] = emlrtCreateDoubleScalar(m);
  return emlrtCallMATLABR2012b(sp, 1, &m1, 12, pArrays, "numerictype", true,
    location);
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                int32_T nlhs
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void MatrixInverseR_fixpt_api(const mxArray * const prhs[1], int32_T nlhs, const
  mxArray *plhs[1])
{
  uint16_T Rmat[4];
  uint16_T RmatInv[4];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "Rmat", Rmat);

  /* Invoke the target function */
  MatrixInverseR_fixpt(Rmat, RmatInv);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, RmatInv);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixInverseR_fixpt_atexit(void)
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
  MatrixInverseR_fixpt_xil_terminate();
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixInverseR_fixpt_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 3U, "ForceOff");
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    MatrixInverseR_fixpt_once(&st);
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixInverseR_fixpt_terminate(void)
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
 * File trailer for _coder_MatrixInverseR_fixpt_api.c
 *
 * [EOF]
 */
