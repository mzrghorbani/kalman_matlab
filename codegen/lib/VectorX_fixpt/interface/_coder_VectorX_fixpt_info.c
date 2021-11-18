/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_VectorX_fixpt_info.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 10-Aug-2018 16:33:54
 */

/* Include Files */
#include "_coder_VectorX_fixpt_info.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char * data[10] = {
    "789ced5a4d8fdb44189e454b59900a91f890b8d103bd548a9336ab16a18a6cb2094d4976b74936092d3475ec71329b19dbeb8f25cb85def8131c72e400528f1c"
    "7be0c01121e0c0ffe08eedc4496c3a8a77e39ddd24335264bf793cf3ccbcf3fa99d1eb011ba5ca0600e06de7f7fd7700bcf81478e5fae80212e3eb6b2058c2f8",
    "c6f8fa56c8f6cbeb6033506f63ccf7c3d89634d582036b6460a4c23d9b74a0e118aa48e0a4195923481555ab7eaa43604053c32750f610056158470496b519e3"
    "01720c529c8126860bb9f7f91e94fa359b00a3674ebb8b670d30f68f5b7ea38c7f33a27fba14ff2442f893c2d7424f23508050ef12d24d0bbb9a6413a85aa640",
    "440b8b9db66e68475072ec1e36dba3ff0449936117aa42c30134a3252868a05bbed5f6ac24b9d1859673ef54e94dc6f58cd2ef6b11c715befae54db0356365b2"
    "f3f8a2faf15ac80693e746c8787873c717956f33644ff94688d413dd609df00d17e4fb8cca17c49f94caadff854a65a75edec90996a6e18e361020c102461d37",
    "18a0ac6b48b584917b9284e1fcbffca9f9e15f3b6ce36dfefcaf0adf80d25ed478fb80c29708e1a752a5f8a5be9d965b56bf6cb774abd5d88685693f0ee6f0cc"
    "eb07a0d8acda7f49a91fd58f5f51da4f84f08bd4f7d9f13ca3f437de38bc199baebf41e14b8c1105b511d1f1c2ba1e2eb4f9f24b5cba9e9dc3e7e3e7d675cf3d",
    "49c26efeb3f99bcfffe6ba7e417cac745dd16f9707e5bddd81848f6ab873afba2f6e1fe65747d78794faebfbde3ae5792936ddde0ad960f2dc0841a6a98b8609"
    "59edff65cdee60389dff1f17e42b50f982f859e67fbca6bb8e516c55f05de42de00cf57bebfe53aedfcbaedfdf344b6611f71bc5db8a51c32747fb0fd56f1f71",
    "fde6fa1d91efacfaad2fc8f70e952f8843d281b20ce564285fc5f53c58b89eb3e1e37a1e4ffb434afdb5d6f3ec41362e7dbd1eb241e8391f47a66a136820c972"
    "bfa8c4972f67bd3f2f52f982f839e321e02657d019c6c5cf3c6fbefc7afef99dfe69edb88b70be9eef578f73dd7affb0b0bb3a7afe82523faa1f1f52da4f84f0",
    "45f5fc8673d78358f73e2d03c671f7919e8d2beedea7f02542b8fbc1c0483a2e80862ae224866ad7fd2c7a69f9f3abb66f777fb73c2709b77c2f09232fb1deb7"
    "3ffdf55dbe6fbfaa3a1ff57dab971b8f3f2172cbd86966ee0ed2771a24b5f705e03abf563a9f8a4fe7dfa3f02542b8e38bb63364c93dcda46886a4a9a67798ea",
    "aae46b168d9bca1c7e1f3f67dcbcca7d8cf59f9f8fb9483e56fb7cbb78b79ecbdbf57bd5fd6633a5e3aaf1a0d92c72fd5f2bfd3f98ea3f8d2fae7387c854dc33"
    "ae9796b7192ec8779fca17c4cf9db75110631d07bffcfb0fd7f165d7f1daa98ec8f671b599461d39537afce8a0923e59a17ccd90527f8ddf5ba7a45626ff7ed6",
    "f3ea3cff1e2c3cffce868fe7dfe3699fefcb5fddff40dcfd7ee9791968185a4077d9f5639c97092e374b9a9ff1dcc83a3ff3c7c7853ff93a70417cacd601493e"
    "41a98a78286652ba94d38ddd06ceb472cbbf0efc07be5b619e", "" };

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
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("VectorX_fixpt"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/eepgmmg1/Documents/matlab_projects/hls_matlab/VectorX.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737237.74293981481));
  xResult = emlrtCreateStructMatrix(1, 1, 4, *(const char * (*)[4])&b_fldNames[0]);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.882065 (R2018b) Prerelease"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_VectorX_fixpt_info.c
 *
 * [EOF]
 */
