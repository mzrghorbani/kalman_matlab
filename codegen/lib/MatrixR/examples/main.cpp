//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: main.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 06-Jul-2018 19:01:22
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
#include "MatrixR.h"
#include "main.h"
#include "MatrixR_terminate.h"
#include "MatrixR_initialize.h"

// Function Declarations
static void argInit_4x1_real_T(double result[4]);
static void argInit_8x1_real_T(double result[8]);
static double argInit_real_T();
static void main_MatrixR();

// Function Definitions

//
// Arguments    : double result[4]
// Return Type  : void
//
static void argInit_4x1_real_T(double result[4])
{
  double result_tmp;

  // Loop over the array to initialize each element.
  // Set the value of the array element.
  // Change this value to the value that the application requires.
  result_tmp = argInit_real_T();
  result[0] = result_tmp;

  // Set the value of the array element.
  // Change this value to the value that the application requires.
  result[1] = result_tmp;

  // Set the value of the array element.
  // Change this value to the value that the application requires.
  result[2] = argInit_real_T();

  // Set the value of the array element.
  // Change this value to the value that the application requires.
  result[3] = argInit_real_T();
}

//
// Arguments    : double result[8]
// Return Type  : void
//
static void argInit_8x1_real_T(double result[8])
{
  int idx0;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 8; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = argInit_real_T();
  }
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_MatrixR()
{
  double V[4];
  double H_tmp[8];
  double Rmat[4];

  // Initialize function 'MatrixR' input arguments.
  // Initialize function input argument 'V'.
  argInit_4x1_real_T(V);

  // Initialize function input argument 'H'.
  argInit_8x1_real_T(H_tmp);

  // Initialize function input argument 'St'.
  // Call the entry-point 'MatrixR'.
  MatrixR(V, H_tmp, H_tmp, Rmat);
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
  MatrixR_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_MatrixR();

  // Terminate the application.
  // You do not need to do this more than one time.
  MatrixR_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
