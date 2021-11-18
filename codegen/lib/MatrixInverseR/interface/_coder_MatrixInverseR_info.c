/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 * File: _coder_MatrixInverseR_info.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 06-Jul-2018 19:15:03
 */

/* Include Files */
#include "_coder_MatrixInverseR_info.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char * data[8] = {
    "789ced58bd6fd34014bf404165003c21318100b1548a494925ca804843f35192a669d252a850eb8f73e2f63e5cc749932e746465efd091918d8efd2760808d99"
    "15669cc49726262747729aa8a99f645d5e7ef6fd5ede3dffdee540289d0d01006ed9d7d107004e1e8196dd6c0f4070c62ba0d7dc78c819afbb7c66d7c054cf73",
    "2187efc8f1154a2c58b7da0ed2095cae62199ab643240c3bd3a814eb442256b1614060c20a4535a8b6104d47b0a86398a15d4e4ab71d9ce8823a4e136a7e8e97"
    "a1b25ba86260962b67e1a26e0738f969da67ceef9f1a303f494e7e0417beb9f85e2c530c45088d12c6a588f88a2a550c895511b1642149de324cba0315db2fa3",
    "ca56fb3b312b59a65e4f931a342b70358c3b716f73e262ebe515b77b6476034c7779d32fbdf806cdd3550e9fe02092dc5ea061f1f1ea56701095566504cff88e"
    "7df2bde0f2f5e29be9ccc67fa5908d1533b105d1a214c9b42e428c44a4cb4e5d8810695522da09b2977f84eb7f7abaf6f85b6cb4f536cadf375ebe3a67be41eb",
    "ed0e874f70e17bb2ac6a5143ce15570a669e46924994892e9cc5b1e2c1e31507e0f8a39aff98f3fce57d6f9b76bfa3db879cf906cdcf3d0e9fe0c215aa4233ac"
    "db4ddf24120aeb9585aa8eac34b1db3e3475656cbafec5275f8ecbd78b0f5a1fcd6ba6952c7186654b74676ba47dfef0eb9f1f81ce5f749dcfd5f6e2312d557b",
    "56cc471bca2226b389772815e8fc64ebfc93a1e9fc5d0e9fe0c25d3a5f5124249961b67bf7bf7f771b2f1e66c3d2f9250f3e86fbd2f99976ba58ad74c7bfcd89"
    "6f88fbf94f3f9f073a7fd1757e672e992fa9f9f5f47c623932bf2ee7e74ada4a3cd0f9cba2f31f39f30d9a9f071c3ec185bb745e320cd428b4d42b51258aa553",
    "d2be8fc565f88cebb6475c0cd71cf6adb244547ba3cff84f7cf2af7af033dc97fef7c9e218fac0afdff2f7a00f9c13dfa8fac0ebf5c82e8d1e6892babfff6675"
    "369a9d4facbd5d9c9c3e10bccffd4766bdf53737b4fef090c327b870777fa8515d8d99a6d44820c9b220d149a975dfb8fe0ff8ad9f82071fc3fdd54f9fac3905",
    "34c2fa39fc1bf4830bdf0f0e96524fe36bc606cecb3935b6a1a5b2759c9ba0f39fa01ff41f99f5d65f6ae2ce85c675fe1f9c0b0d9baf6d97852f3817f237ff3f"
    "a9973578", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 9424U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("MatrixInverseR"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/eepgmmg1/Documents/matlab_projects/hls_matlab/MatrixInverseR.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737239.61855324078));
  xResult = emlrtCreateStructMatrix(1, 1, 4, *(const char * (*)[4])&b_fldNames[0]);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.882065 (R2018b) Prerelease"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_MatrixInverseR_info.c
 *
 * [EOF]
 */
