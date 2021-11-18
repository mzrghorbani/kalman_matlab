//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: main.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 18:42:13
//

//***********************************************************************
// This automatically generated example C main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Include Files
#include "rt_nonfinite.h"
#include "MatrixS_fixpt.h"
#include "main.h"
#include "MatrixS_fixpt_terminate.h"
#include "MatrixS_fixpt_initialize.h"

// Function Declarations
static void argInit_16x1_sfix16_E1(short result[16]);
static void argInit_8x1_sfix11(short result[8]);
static short argInit_sfix11();
static void main_MatrixS_fixpt();

// Function Definitions

//
// Arguments    : short result[16]
// Return Type  : void
//
static void argInit_16x1_sfix16_E1(short result[16])
{
  int idx0;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 16; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = argInit_sfix11();
  }
}

//
// Arguments    : short result[8]
// Return Type  : void
//
static void argInit_8x1_sfix11(short result[8])
{
  int idx0;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 8; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = argInit_sfix11();
  }
}

//
// Arguments    : void
// Return Type  : short
//
static short argInit_sfix11()
{
  return 0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_MatrixS_fixpt()
{
  short iv0[8];
  short iv1[16];
  short S[8];

  // Initialize function 'MatrixS_fixpt' input arguments.
  // Initialize function input argument 'H'.
  // Initialize function input argument 'C'.
  // Call the entry-point 'MatrixS_fixpt'.
  argInit_8x1_sfix11(iv0);
  argInit_16x1_sfix16_E1(iv1);
  MatrixS_fixpt(iv0, iv1, S);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int main(int, const char * const [])
{
  // Initialize the application.
  // You do not need to do this more than one time.
  MatrixS_fixpt_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_MatrixS_fixpt();

  // Terminate the application.
  // You do not need to do this more than one time.
  MatrixS_fixpt_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
