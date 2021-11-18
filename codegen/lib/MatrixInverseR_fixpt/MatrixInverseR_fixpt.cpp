//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: MatrixInverseR_fixpt.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 28-Jun-2018 14:52:48
//

// Include Files
#include "MatrixInverseR_fixpt.h"

// Function Declarations
static unsigned long MultiWord2uLong(const unsigned long u[]);
static unsigned long _u64d_div__(unsigned long b, unsigned long c);
static long div_s45s32(int numerator, int denominator);
static long div_s57s64(long numerator, long denominator);
static unsigned long div_u43u32(unsigned int numerator, unsigned int denominator);
static void sMultiWordShr(const unsigned long u1[], int n1, unsigned int n2,
  unsigned long y[], int n);
static void ssuMultiWordMul(const unsigned long u1[], int n1, const unsigned
  long u2[], int n2, unsigned long y[], int n);
static void uMultiWordMul(const unsigned long u1[], int n1, const unsigned long
  u2[], int n2, unsigned long y[], int n);
static void uMultiWordShr(const unsigned long u1[], int n1, unsigned int n2,
  unsigned long y[], int n);

// Function Definitions

//
// Arguments    : const unsigned long u[]
// Return Type  : unsigned long
//
static unsigned long MultiWord2uLong(const unsigned long u[])
{
  return u[0];
}

//
// Arguments    : unsigned long b
//                unsigned long c
// Return Type  : unsigned long
//
static unsigned long _u64d_div__(unsigned long b, unsigned long c)
{
  return b / c;
}

//
// Arguments    : int numerator
//                int denominator
// Return Type  : long
//
static long div_s45s32(int numerator, int denominator)
{
  long quotient;
  unsigned int b_numerator;
  unsigned int b_denominator;
  unsigned int tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = 17592186044415L;
    } else {
      quotient = -17592186044416L;
    }
  } else {
    if (numerator < 0) {
      b_numerator = ~(unsigned int)numerator + 1U;
    } else {
      b_numerator = (unsigned int)numerator;
    }

    if (denominator < 0) {
      b_denominator = ~(unsigned int)denominator + 1U;
    } else {
      b_denominator = (unsigned int)denominator;
    }

    tempAbsQuotient = b_numerator / b_denominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(long)tempAbsQuotient;
    } else {
      quotient = tempAbsQuotient;
    }

    if ((quotient & 17592186044416L) != 0L) {
      quotient |= -17592186044416L;
    } else {
      quotient &= 17592186044415L;
    }
  }

  return quotient;
}

//
// Arguments    : long numerator
//                long denominator
// Return Type  : long
//
static long div_s57s64(long numerator, long denominator)
{
  long quotient;
  unsigned long b_numerator;
  unsigned long b_denominator;
  unsigned long tempAbsQuotient;
  if (denominator == 0L) {
    if (numerator >= 0L) {
      quotient = 72057594037927935L;
    } else {
      quotient = -72057594037927936L;
    }
  } else {
    if (numerator < 0L) {
      b_numerator = ~(unsigned long)numerator + 1UL;
    } else {
      b_numerator = (unsigned long)numerator;
    }

    if (denominator < 0L) {
      b_denominator = ~(unsigned long)denominator + 1UL;
    } else {
      b_denominator = (unsigned long)denominator;
    }

    tempAbsQuotient = b_numerator / b_denominator;
    if ((numerator < 0L) != (denominator < 0L)) {
      quotient = -(long)tempAbsQuotient;
    } else {
      quotient = (long)tempAbsQuotient;
    }

    if ((quotient & 72057594037927936L) != 0L) {
      quotient |= -72057594037927936L;
    } else {
      quotient &= 72057594037927935L;
    }
  }

  return quotient;
}

//
// Arguments    : unsigned int numerator
//                unsigned int denominator
// Return Type  : unsigned long
//
static unsigned long div_u43u32(unsigned int numerator, unsigned int denominator)
{
  unsigned long quotient;
  if (denominator == 0U) {
    quotient = 8796093022207UL;
  } else {
    quotient = ((unsigned long)numerator / denominator) & 8796093022207UL;
  }

  return quotient;
}

//
// Arguments    : const unsigned long u1[]
//                int n1
//                unsigned int n2
//                unsigned long y[]
//                int n
// Return Type  : void
//
static void sMultiWordShr(const unsigned long u1[], int n1, unsigned int n2,
  unsigned long y[], int n)
{
  int nb;
  int i;
  unsigned long ys;
  int nc;
  unsigned int nr;
  int i1;
  unsigned int nl;
  unsigned long u1i;
  unsigned long yi;
  unsigned long b_nc;
  nb = (int)n2 / 64;
  i = 0;
  if ((u1[n1 - 1] & 9223372036854775808UL) != 0UL) {
    ys = MAX_uint64_T;
  } else {
    ys = 0UL;
  }

  if (nb < n1) {
    nc = n + nb;
    if (nc > n1) {
      nc = n1;
    }

    nr = n2 - nb * 64U;
    if (nr > 0U) {
      nl = 64U - nr;
      u1i = u1[nb];
      for (i1 = nb + 1; i1 < nc; i1++) {
        yi = u1i >> nr;
        u1i = u1[i1];
        y[i] = yi | u1i << nl;
        i++;
      }

      if (nc < n1) {
        b_nc = u1[nc];
      } else {
        b_nc = ys;
      }

      y[i] = u1i >> nr | b_nc << nl;
      i++;
    } else {
      for (i1 = nb; i1 < nc; i1++) {
        y[i] = u1[i1];
        i++;
      }
    }
  }

  while (i < n) {
    y[i] = ys;
    i++;
  }
}

//
// Arguments    : const unsigned long u1[]
//                int n1
//                const unsigned long u2[]
//                int n2
//                unsigned long y[]
//                int n
// Return Type  : void
//
static void ssuMultiWordMul(const unsigned long u1[], int n1, const unsigned
  long u2[], int n2, unsigned long y[], int n)
{
  boolean_T isNegative1;
  unsigned long cb1;
  int k;
  int i;
  unsigned long cb;
  unsigned long u1i;
  unsigned long a1;
  unsigned long yk;
  unsigned long a0;
  int nj;
  int j;
  unsigned long b1;
  unsigned long w10;
  unsigned long w01;
  isNegative1 = ((u1[n1 - 1] & 9223372036854775808UL) != 0UL);
  cb1 = 1UL;

  // Initialize output to zero
  for (k = 0; k < n; k++) {
    y[k] = 0UL;
  }

  for (i = 0; i < n1; i++) {
    cb = 0UL;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (u1i < cb1);
    }

    a1 = u1i >> 32U;
    a0 = u1i & 4294967295UL;
    k = n - i;
    if (n2 <= k) {
      nj = n2;
    } else {
      nj = k;
    }

    k = i;
    for (j = 0; j < nj; j++) {
      u1i = u2[j];
      b1 = u1i >> 32U;
      u1i &= 4294967295UL;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 32U;
      cb += w01 >> 32U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  // Apply sign
  if (isNegative1) {
    cb = 1UL;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (yk < cb);
    }
  }
}

//
// Arguments    : const unsigned long u1[]
//                int n1
//                const unsigned long u2[]
//                int n2
//                unsigned long y[]
//                int n
// Return Type  : void
//
static void uMultiWordMul(const unsigned long u1[], int n1, const unsigned long
  u2[], int n2, unsigned long y[], int n)
{
  int k;
  int i;
  unsigned long cb;
  unsigned long u1i;
  unsigned long a1;
  unsigned long a0;
  int nj;
  int j;
  unsigned long b1;
  unsigned long w10;
  unsigned long w01;
  unsigned long yk;

  // Initialize output to zero
  for (k = 0; k < n; k++) {
    y[k] = 0UL;
  }

  for (i = 0; i < n1; i++) {
    cb = 0UL;
    u1i = u1[i];
    a1 = u1i >> 32U;
    a0 = u1i & 4294967295UL;
    k = n - i;
    if (n2 <= k) {
      nj = n2;
    } else {
      nj = k;
    }

    k = i;
    for (j = 0; j < nj; j++) {
      u1i = u2[j];
      b1 = u1i >> 32U;
      u1i &= 4294967295UL;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 32U;
      cb += w01 >> 32U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }
}

//
// Arguments    : const unsigned long u1[]
//                int n1
//                unsigned int n2
//                unsigned long y[]
//                int n
// Return Type  : void
//
static void uMultiWordShr(const unsigned long u1[], int n1, unsigned int n2,
  unsigned long y[], int n)
{
  int nb;
  int i;
  int nc;
  unsigned int nr;
  int i1;
  unsigned int nl;
  unsigned long u1i;
  unsigned long yi;
  nb = (int)n2 / 64;
  i = 0;
  if (nb < n1) {
    nc = n + nb;
    if (nc > n1) {
      nc = n1;
    }

    nr = n2 - nb * 64U;
    if (nr > 0U) {
      nl = 64U - nr;
      u1i = u1[nb];
      for (i1 = nb + 1; i1 < nc; i1++) {
        yi = u1i >> nr;
        u1i = u1[i1];
        y[i] = yi | u1i << nl;
        i++;
      }

      yi = u1i >> nr;
      if (nc < n1) {
        yi |= u1[nc] << nl;
      }

      y[i] = yi;
      i++;
    } else {
      for (i1 = nb; i1 < nc; i1++) {
        y[i] = u1[i1];
        i++;
      }
    }
  }

  while (i < n) {
    y[i] = 0UL;
    i++;
  }
}

//
// Arguments    : const unsigned short Rmat[4]
//                unsigned short RmatInv[4]
// Return Type  : void
//
void MatrixInverseR_fixpt(const unsigned short Rmat[4], unsigned short RmatInv[4])
{
  unsigned long u0;
  unsigned long var1;
  unsigned long u1;
  unsigned char r;
  unsigned int b;
  unsigned long u2;
  int a;
  unsigned short t;
  long b_a;
  unsigned long u3;
  uint128m_T r0;
  uint128m_T r1;
  signed char i0;
  unsigned long u4;
  int i1;
  int128m_T r2;
  int128m_T r3;

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  //                                                                           % 
  //            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % 
  //                                                                           % 
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% 
  if (Rmat[1] > Rmat[0]) {
    // F2F: No information found for converting the following block of code
    // F2F: Start block
    if (Rmat[1] == 0) {
      var1 = 72057594037927935UL;
    } else {
      u0 = Rmat[1];
      if (u0 == 0UL) {
        u2 = MAX_uint64_T;
      } else {
        u2 = _u64d_div__((unsigned long)Rmat[0] << 24, u0);
      }

      var1 = u2 & 72057594037927935UL;
    }

    r = (unsigned char)((unsigned char)(var1 >> 24) & 1);
    a = (int)((unsigned int)r * Rmat[3]) - Rmat[2];
    if ((a & 524288) != 0) {
      a |= -524288;
    } else {
      a &= 524287;
    }

    if (a == 0) {
      b_a = 17592186044415L;
    } else {
      b_a = div_s45s32(16777216, a);
    }

    t = (unsigned short)((unsigned short)b_a << 1);
    if (Rmat[1] == 0) {
      var1 = 72057594037927935UL;
    } else {
      u0 = Rmat[1];
      if (u0 == 0UL) {
        u4 = MAX_uint64_T;
      } else {
        u4 = _u64d_div__((unsigned long)Rmat[3] << 24, u0);
      }

      var1 = u4 & 72057594037927935UL;
    }

    u0 = t;
    uMultiWordMul(&var1, 1, &u0, 1, &r1.chunks[0U], 2);
    uMultiWordShr(&r1.chunks[0U], 2, 24U, &r0.chunks[0U], 2);
    RmatInv[0] = (unsigned short)MultiWord2uLong(&r0.chunks[0U]);
    a = -t;
    if ((a & 65536) != 0) {
      RmatInv[1] = (unsigned short)(a | -65536);
    } else {
      RmatInv[1] = (unsigned short)(a & 65535);
    }

    a = -Rmat[2];
    if ((a & 65536) != 0) {
      a |= -65536;
    } else {
      a &= 65535;
    }

    if (Rmat[1] == 0) {
      if (a < 0) {
        b_a = -72057594037927936L;
      } else {
        b_a = 72057594037927935L;
      }
    } else {
      b_a = div_s57s64((long)a << 24, (long)Rmat[1]);
    }

    var1 = (unsigned long)b_a;
    u0 = t;
    ssuMultiWordMul(&var1, 1, &u0, 1, &r3.chunks[0U], 2);
    sMultiWordShr(&r3.chunks[0U], 2, 24U, &r2.chunks[0U], 2);
    RmatInv[2] = (unsigned short)MultiWord2uLong(&r2.chunks[0U]);
    RmatInv[3] = (unsigned short)((unsigned int)r * t);

    // F2F: End block
  } else {
    if (Rmat[0] == 0) {
      var1 = 72057594037927935UL;
    } else {
      u0 = Rmat[0];
      if (u0 == 0UL) {
        u1 = MAX_uint64_T;
      } else {
        u1 = _u64d_div__((unsigned long)Rmat[1] << 24, u0);
      }

      var1 = u1 & 72057594037927935UL;
    }

    r = (unsigned char)((unsigned char)(var1 >> 24) & 1);
    b = (Rmat[3] - (unsigned int)r * Rmat[2]) & 262143U;
    if (b == 0U) {
      var1 = 8796093022207UL;
    } else {
      var1 = div_u43u32(16777216U, b);
    }

    t = (unsigned short)((unsigned short)var1 << 1);
    if (Rmat[0] == 0) {
      var1 = 72057594037927935UL;
    } else {
      u0 = Rmat[0];
      if (u0 == 0UL) {
        u3 = MAX_uint64_T;
      } else {
        u3 = _u64d_div__((unsigned long)Rmat[3] << 24, u0);
      }

      var1 = u3 & 72057594037927935UL;
    }

    u0 = t;
    uMultiWordMul(&var1, 1, &u0, 1, &r0.chunks[0U], 2);
    uMultiWordShr(&r0.chunks[0U], 2, 24U, &r1.chunks[0U], 2);
    RmatInv[0] = (unsigned short)MultiWord2uLong(&r1.chunks[0U]);
    i0 = (signed char)-(signed char)r;
    if ((i0 & 2) != 0) {
      i1 = i0 | -2;
    } else {
      i1 = i0 & 1;
    }

    a = i1 * t;
    if ((a & 131072) != 0) {
      RmatInv[1] = (unsigned short)(a | -131072);
    } else {
      RmatInv[1] = (unsigned short)(a & 131071);
    }

    a = -Rmat[2];
    if ((a & 65536) != 0) {
      a |= -65536;
    } else {
      a &= 65535;
    }

    if (Rmat[0] == 0) {
      if (a < 0) {
        b_a = -72057594037927936L;
      } else {
        b_a = 72057594037927935L;
      }
    } else {
      b_a = div_s57s64((long)a << 24, (long)Rmat[0]);
    }

    var1 = (unsigned long)b_a;
    u0 = t;
    ssuMultiWordMul(&var1, 1, &u0, 1, &r2.chunks[0U], 2);
    sMultiWordShr(&r2.chunks[0U], 2, 24U, &r3.chunks[0U], 2);
    RmatInv[2] = (unsigned short)MultiWord2uLong(&r3.chunks[0U]);
    RmatInv[3] = t;
  }
}

//
// File trailer for MatrixInverseR_fixpt.cpp
//
// [EOF]
//
