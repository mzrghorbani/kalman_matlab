/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_VectorM_fixpt_info.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 10-Aug-2018 16:17:18
 */

/* Include Files */
#include "_coder_VectorM_fixpt_info.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char * data[10] = {
    "789ced5acf8fdb44149e454b59900a91a048dce8815e2ac54977572daa2ab2c9263425d9dd26d924b4d0d4b1c7c96c666caf7f2c592ef4c63fc121470e20f5c8"
    "b1070e1c11020efc1fdcb1133b894d47f16ebcb39b64468aec97cf33dfcc9be76f46cf03d68ae53500c0bbceeffbef0078791f0ccbf5d10524bceb1b2058c2f8",
    "9a777d2764fbe54db01ea8b7e6f1fde0d992a65ab06f8d0c8c54b8679336341c4315091c37236b04a9a26ad54e75080c686af804ca43444118d61081256dca78"
    "881c8314a6a0b1e142ee7dae0ba55ed526c0e89a93eee2690378fe71cb6f94f1af47f44f87e29f44087f9aff5ae86a040a10ea1d423a696157936c0255cb1488",
    "6861b1ddd20ded084a8eddc5666bf49f206932ec4055a83b8066940505f575cbb75a432b496e76a0e5dc3b55bae3713da7f4fb5ac47185af7e791b6c4c599b99"
    "597c51fd782d6483f17323c41bdeccf145e55b0fd913be112275453758c77c8339f93ea3f205f1a7c552f37fa152dea99576b282a569b8adf50548b08051db0d",
    "0628eb1a522d61e49e246138ffaf7e6a7cf4d70edb789b3dffcbc2d7a7b41735de3ea4f02542f8a9542e7ca96fa7e5a6d52bd94ddd6ad6b7617ed28f83193cb3"
    "fa012836abf65f51ea47f5e35794f61321fc22f57d7a3ccf29fd8d370e6fc5a6eb6f51f8121ea2a016223a9e5bd7c385365f7e894bd73333f87cfcdcba3e744f",
    "92b09bff4ceed68bbfb9ae5f101f2b5d57f43ba57e696fb72fe1a32a6edfabec8bdb87b9e5d1f501a5feeabeb74e79518c4db7374236183f37429069eaa26142"
    "56fb7f59b3db184ee6ffc739f9f254be207e96f9f7d674d7318aad0abe8b860b3843fdde78f08cebf7a2ebf7378da259c0bd7ae18e6254f1c9d1fe23f5dbc75c",
    "bfb97e47e43bab7eeb73f2bd47e50be290b4a12c433919ca57713d0f16aee76cf8b89ec7d3fe80527fa5f53c7390894b5faf876c107acec791a9da041a48b2dc"
    "2f2af1e5cb59efcf0b54be207ece7808b8c915748671f133cf9b2fbe9e7fbed93bad1e7710ced572bdca71b653eb1de6779747cf5f52ea47f5e3234afb89103e",
    "af9edf74eeba10ebc34fcb8071dc7dac67e28abb1b14be4408773f181849c705d050459cc450edb89f452f2d7f7ed5f6edeeeff6d049c26ddf4bc2c84bacf7ed"
    "cf7e7d9fefdbafaace477ddf6aa5fa934f89dc34761a5b77fbe9cd3a49ed7d01b8ceaf94cea7e2d3f90f287c8910eef8a2e50c59724f33299a2169aa393c4c75",
    "55f235f3c64d7906bf8f9f336e5ee73ec6facfcfc75c241fab7dbe5db85bcbe6ecdabdca7ea391d271c578d86814b8feaf94fe1f4cf49fc617d7b943642aee19"
    "d74bcbdb0ce6e47b40e50be2e7cedb2888b18e835ffefd87ebf8a2eb78f5544764fbb8d248a3b6bc557cf2f8a09c3e59a27ccd80527f85df5ba7a49626ff7ed6",
    "f3ea3cff1e2c3cffce868fe7dfe3699fefcb5fdfff40dcfd7ee9791968185a4077d9f5c3cbcb04979b05cdcf0cddc83a3ff3c727f93ff93a70417cacd601493e"
    "41a9b278286ea57429ab1bbb75bcd5cc2efe3af01f128a6171", "" };

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
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("VectorM_fixpt"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/eepgmmg1/Documents/matlab_projects/hls_matlab/VectorM.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737237.74260416662));
  xResult = emlrtCreateStructMatrix(1, 1, 4, *(const char * (*)[4])&b_fldNames[0]);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.882065 (R2018b) Prerelease"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_VectorM_fixpt_info.c
 *
 * [EOF]
 */
