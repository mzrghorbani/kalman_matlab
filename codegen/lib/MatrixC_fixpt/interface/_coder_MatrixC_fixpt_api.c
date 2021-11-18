/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixC_fixpt_api.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:18:00
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_MatrixC_fixpt_api.h"
#include "_coder_MatrixC_fixpt_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static const mxArray *c_eml_mx;
static const mxArray *d_eml_mx;
static const mxArray *e_eml_mx;
static const mxArray *f_eml_mx;
static const mxArray *g_eml_mx;
static const mxArray *h_eml_mx;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "MatrixC_fixpt",                     /* fFunctionName */
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
static void MatrixC_fixpt_once(const emlrtStack *sp);
static uint16_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_numerictype(const emlrtStack *sp, const char * b,
  boolean_T c, const char * d, const char * e, const char * f, real_T g, const
  char * h, real_T i, const char * j, real_T k, const char * l, real_T m,
  emlrtMCInfo *location);
static uint16_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c11,
  const char_T *identifier);
static uint16_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static uint16_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c22,
  const char_T *identifier);
static uint16_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *c00, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const int16_T u[16]);
static uint16_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *fimath(const emlrtStack *sp, const char * b, const char
  * c, const char * d, const char * e, const char * f, const char * g, const
  char * h, const char * i, const char * j, const char * k, const char * l,
  const char * m, const char * n, real_T o, const char * p, real_T q, const char
  * r, real_T s, const char * t, real_T u, const char * v, real_T w, const char *
  x, real_T y, const char * ab, real_T bb, const char * cb, real_T db, const
  char * eb, real_T fb, const char * gb, real_T hb, const char * ib, real_T jb,
  const char * kb, real_T lb, const char * mb, boolean_T nb, const char * ob,
  real_T pb, const char * qb, real_T rb, emlrtMCInfo *location);
static uint16_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c33,
  const char_T *identifier);
static uint16_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static uint16_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c01,
  const char_T *identifier);
static uint16_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static int16_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c23,
  const char_T *identifier);
static int16_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static uint16_T m_emlrt_marshallIn(const mxArray *src);
static int16_T n_emlrt_marshallIn(const mxArray *src);
static const mxArray *numerictype(const emlrtStack *sp, const char * b, real_T c,
  const char * d, real_T e, const char * f, real_T g, const char * h, real_T i,
  emlrtMCInfo *location);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 * Return Type  : void
 */
static void MatrixC_fixpt_once(const emlrtStack *sp)
{
  emlrtAssignP(&h_eml_mx, NULL);
  emlrtAssignP(&g_eml_mx, NULL);
  emlrtAssignP(&f_eml_mx, NULL);
  emlrtAssignP(&e_eml_mx, NULL);
  emlrtAssignP(&d_eml_mx, NULL);
  emlrtAssignP(&c_eml_mx, NULL);
  emlrtAssignP(&b_eml_mx, NULL);
  emlrtAssignP(&eml_mx, NULL);
  emlrtAssignP(&h_eml_mx, numerictype(sp, "FractionLength", -1.0, "BinaryPoint",
    -1.0, "Slope", 2.0, "FixedExponent", 1.0, &emlrtMCI));
  emlrtAssignP(&g_eml_mx, numerictype(sp, "FractionLength", 12.0, "BinaryPoint",
    12.0, "Slope", 0.000244140625, "FixedExponent", -12.0, &emlrtMCI));
  emlrtAssignP(&f_eml_mx, b_numerictype(sp, "SignednessBool", false,
    "Signedness", "Unsigned", "FractionLength", 11.0, "BinaryPoint", 11.0,
    "Slope", 0.00048828125, "FixedExponent", -11.0, &emlrtMCI));
  emlrtAssignP(&e_eml_mx, b_numerictype(sp, "SignednessBool", false,
    "Signedness", "Unsigned", "FractionLength", 4.0, "BinaryPoint", 4.0, "Slope",
    0.0625, "FixedExponent", -4.0, &emlrtMCI));
  emlrtAssignP(&d_eml_mx, b_numerictype(sp, "SignednessBool", false,
    "Signedness", "Unsigned", "FractionLength", 19.0, "BinaryPoint", 19.0,
    "Slope", 1.9073486328125E-6, "FixedExponent", -19.0, &emlrtMCI));
  emlrtAssignP(&c_eml_mx, b_numerictype(sp, "SignednessBool", false,
    "Signedness", "Unsigned", "FractionLength", 0.0, "BinaryPoint", 0.0, "Slope",
    1.0, "FixedExponent", 0.0, &emlrtMCI));
  emlrtAssignP(&b_eml_mx, b_numerictype(sp, "SignednessBool", false,
    "Signedness", "Unsigned", "FractionLength", 18.0, "BinaryPoint", 18.0,
    "Slope", 3.814697265625E-6, "FixedExponent", -18.0, &emlrtMCI));
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
 * Return Type  : uint16_T
 */
static uint16_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  uint16_T y;
  static const int32_T dims = 0;
  emlrtCheckFiR2012b(sp, parentId, u, false, 0U, (int32_T *)&dims, eml_mx,
                     b_eml_mx);
  y = m_emlrt_marshallIn(emlrtAlias(u));
  emlrtDestroyArray(&u);
  return y;
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
static const mxArray *b_numerictype(const emlrtStack *sp, const char * b,
  boolean_T c, const char * d, const char * e, const char * f, real_T g, const
  char * h, real_T i, const char * j, real_T k, const char * l, real_T m,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[12];
  const mxArray *m2;
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
  return emlrtCallMATLABR2012b(sp, 1, &m2, 12, pArrays, "numerictype", true,
    location);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *c11
 *                const char_T *identifier
 * Return Type  : uint16_T
 */
static uint16_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c11,
  const char_T *identifier)
{
  uint16_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(c11), &thisId);
  emlrtDestroyArray(&c11);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : uint16_T
 */
static uint16_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  uint16_T y;
  static const int32_T dims = 0;
  emlrtCheckFiR2012b(sp, parentId, u, false, 0U, (int32_T *)&dims, eml_mx,
                     c_eml_mx);
  y = m_emlrt_marshallIn(emlrtAlias(u));
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *c22
 *                const char_T *identifier
 * Return Type  : uint16_T
 */
static uint16_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c22,
  const char_T *identifier)
{
  uint16_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(c22), &thisId);
  emlrtDestroyArray(&c22);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *c00
 *                const char_T *identifier
 * Return Type  : uint16_T
 */
static uint16_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *c00, const
  char_T *identifier)
{
  uint16_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(c00), &thisId);
  emlrtDestroyArray(&c00);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const int16_T u[16]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const int16_T u[16])
{
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *m0;
  static const int32_T iv0[1] = { 16 };

  int16_T *pData;
  int32_T i0;
  int32_T i;
  y = NULL;
  b_y = NULL;
  m0 = emlrtCreateNumericArray(1, iv0, mxINT16_CLASS, mxREAL);
  pData = (int16_T *)emlrtMxGetData(m0);
  i0 = 0;
  for (i = 0; i < 16; i++) {
    pData[i0] = u[i];
    i0++;
  }

  emlrtAssign(&b_y, m0);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, h_eml_mx, "simulinkarray", b_y,
    true, false));
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : uint16_T
 */
static uint16_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  uint16_T y;
  static const int32_T dims = 0;
  emlrtCheckFiR2012b(sp, parentId, u, false, 0U, (int32_T *)&dims, eml_mx,
                     d_eml_mx);
  y = m_emlrt_marshallIn(emlrtAlias(u));
  emlrtDestroyArray(&u);
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
  const mxArray *m3;
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
  return emlrtCallMATLABR2012b(sp, 1, &m3, 42, pArrays, "fimath", true, location);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *c33
 *                const char_T *identifier
 * Return Type  : uint16_T
 */
static uint16_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c33,
  const char_T *identifier)
{
  uint16_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(c33), &thisId);
  emlrtDestroyArray(&c33);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : uint16_T
 */
static uint16_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  uint16_T y;
  static const int32_T dims = 0;
  emlrtCheckFiR2012b(sp, parentId, u, false, 0U, (int32_T *)&dims, eml_mx,
                     e_eml_mx);
  y = m_emlrt_marshallIn(emlrtAlias(u));
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *c01
 *                const char_T *identifier
 * Return Type  : uint16_T
 */
static uint16_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c01,
  const char_T *identifier)
{
  uint16_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(c01), &thisId);
  emlrtDestroyArray(&c01);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : uint16_T
 */
static uint16_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  uint16_T y;
  static const int32_T dims = 0;
  emlrtCheckFiR2012b(sp, parentId, u, false, 0U, (int32_T *)&dims, eml_mx,
                     f_eml_mx);
  y = m_emlrt_marshallIn(emlrtAlias(u));
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *c23
 *                const char_T *identifier
 * Return Type  : int16_T
 */
static int16_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c23,
  const char_T *identifier)
{
  int16_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(c23), &thisId);
  emlrtDestroyArray(&c23);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : int16_T
 */
static int16_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int16_T y;
  static const int32_T dims = 0;
  emlrtCheckFiR2012b(sp, parentId, u, false, 0U, (int32_T *)&dims, eml_mx,
                     g_eml_mx);
  y = n_emlrt_marshallIn(emlrtAlias(u));
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const mxArray *src
 * Return Type  : uint16_T
 */
static uint16_T m_emlrt_marshallIn(const mxArray *src)
{
  uint16_T ret;
  const mxArray *mxInt;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  ret = *(uint16_T *)emlrtMxGetData(mxInt);
  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const mxArray *src
 * Return Type  : int16_T
 */
static int16_T n_emlrt_marshallIn(const mxArray *src)
{
  int16_T ret;
  const mxArray *mxInt;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  ret = *(int16_T *)emlrtMxGetData(mxInt);
  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const char * b
 *                real_T c
 *                const char * d
 *                real_T e
 *                const char * f
 *                real_T g
 *                const char * h
 *                real_T i
 *                emlrtMCInfo *location
 * Return Type  : const mxArray *
 */
static const mxArray *numerictype(const emlrtStack *sp, const char * b, real_T c,
  const char * d, real_T e, const char * f, real_T g, const char * h, real_T i,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[8];
  const mxArray *m1;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateDoubleScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateDoubleScalar(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  return emlrtCallMATLABR2012b(sp, 1, &m1, 8, pArrays, "numerictype", true,
    location);
}

/*
 * Arguments    : const mxArray * const prhs[6]
 *                int32_T nlhs
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void MatrixC_fixpt_api(const mxArray * const prhs[6], int32_T nlhs, const
  mxArray *plhs[1])
{
  uint16_T c00;
  uint16_T c11;
  uint16_T c22;
  uint16_T c33;
  uint16_T c01;
  int16_T c23;
  int16_T C[16];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  c00 = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "c00");
  c11 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "c11");
  c22 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "c22");
  c33 = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "c33");
  c01 = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "c01");
  c23 = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "c23");

  /* Invoke the target function */
  MatrixC_fixpt(c00, c11, c22, c33, c01, c23, C);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, C);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixC_fixpt_atexit(void)
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
  MatrixC_fixpt_xil_terminate();
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
  emlrtDestroyArray(&d_eml_mx);
  emlrtDestroyArray(&e_eml_mx);
  emlrtDestroyArray(&f_eml_mx);
  emlrtDestroyArray(&g_eml_mx);
  emlrtDestroyArray(&h_eml_mx);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixC_fixpt_initialize(void)
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
    MatrixC_fixpt_once(&st);
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void MatrixC_fixpt_terminate(void)
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
 * File trailer for _coder_MatrixC_fixpt_api.c
 *
 * [EOF]
 */
