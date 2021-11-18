/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixC_fixpt_info.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Jun-2018 14:18:00
 */

/* Include Files */
#include "_coder_MatrixC_fixpt_info.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char * data[10] = {
    "789ced5a418fdb44149e454b592a15225190b851a970a91427edae5a84aa66934d684ab2bb4db249684b53c71e27b399b1bdb6b364b9d01fc221470e20f5c8b1"
    "070e1c11020efc0feed88e9dc4a6a37837ded94d322345f6cbe7996fe6cdf337a3e7016bc5f21a00e03dfba77d0fc0ab2f805bae8d2e20e15ddf02c112c6d7bc",
    "ebd590ed97b7c17aa0de9ac7f783674b9a6ac18135323052e16e9fb4a1611baa48e0b8195923481555ab76a243604053c3c7507611056158430496b429e321b2"
    "0d529882c6860339f7b92e947ad53e0146d79c74174f1bc0f38f537ea38c7f3da27f3a14ff2442f8d3fc37425723508050ef10d2490b3b9ad42750b54c818816",
    "16db2dddd00ea164db5d6cb646ff099226c30e5485b268196890131434d02ddf6ab95692dce840cbbeb7ab74c7e37a41e9f79588e30a5ffdf22ed898b21e6466"
    "f145f5e395900dc6cf8d106f7833c717956f3d644ff84688d4159d601df30de7e47b40e50be24f8ba5e6ff42a5bc5d2b6d67054bd3705b1b08906001a3b6130c",
    "50d635a45ac2c83d49c270fe5fffd4f8f8af6db6f1367bfe97856f40692f6abc7d44e14b84f013a95cf85adf4acb4dab57ea3775ab59df82f9493ff667f0ccea"
    "07a0d8acda7f4da91fd58fcf28ed2742f879eafbf4785e50fa1b6f1cde8c4dd7dfa1f0253c44412d44743cb7ae870b6dbefc1297ae6766f0f9f89975dd754f92",
    "b09bff4ceeb3977f735d3f273e56baaee8b74b83d2eece40c28755dcbe57d913b70e72cba3eb434afdd57d6fedf2b2189b6e6f846c307e6e8420d3d445c384ac"
    "f6ffb2d66f633899ff1fe7e4cb53f982f869e6df5bd31dc7287d55f05de42ee00cf57be3fe73aedf8baedfdf368a6601f7ea85db8a51c5c7877b8fd4ef1e73fd",
    "e6fa1d91efb4faadcfc9f73e952f8843d286b20ce564285fc5f53c58b89eb3e1e37a1e4ffb434afd95d6f3cc7e262e7dbd16b241e8391f47a6da27d04092e57c"
    "51892f5fce7a7f5ea0f205f133c643c04d8ea0338c8b9f79de7cf1f5fccb3bbd93ea5107e15c2dd7ab1c653bb5de417e6779f4fc15a57e543f3ea2b49f08e1f3",
    "eaf90dfbae0bb1ee7e5a068ce3ee133d1357dc7d48e14b8470e7838191b45d000d55c4490cd58ef359f4c2f2e7976ddfeefc6eb94e126ef95e12465e62bd6f7f"
    "feeb077cdf7e59753eeafb562bd59f7c4ee4a6b1ddd8bc3b48dfa993d4ee5780ebfc4ae97c2a3e9dbf4ee14b8470db172d7bc892739a49d10c49534df730d565",
    "c9d7cc1b37e519fc3e7ec6b87993fb18eb3f3f1f739e7cacf6f9fdc2dd5a36d7afddabec351a291d578c878d4681ebff4ae9fffe44ff697c719d3b44a6e29c71"
    "bdb0bccd704ebefb54be207ee6bc8d8218eb38f8e5df7fb88e2fba8e574f7444b68e2a8d346acb9bc5278ff7cbe9e325cad70c29f557f8bdb54b6a69f2efa73d",
    "afcef3efc1c2f3ef6cf878fe3d9ef6f9befccdfd0fc4ddef179e978186a10574975d3fbcbc4c70b959d0fc8ceb46d6f9993f3ecdffc9d78173e263b50e48f231"
    "4a95c5037133a54b59ddd8a9e3cd6676f1d781ff005346612b", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 15304U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : void
 * Return Type  : mxArray *
 */
mxArray *emlrtMexFcnProperties()
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, *(const char * (*)[6])&
    fldNames[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("MatrixC_fixpt"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/eepgmmg1/Documents/matlab_projects/hls_matlab/MatrixC.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737237.84768518514));
  xResult = emlrtCreateStructMatrix(1, 1, 4, *(const char * (*)[4])&b_fldNames[0]);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.882065 (R2018b) Prerelease"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_MatrixC_fixpt_info.c
 *
 * [EOF]
 */
