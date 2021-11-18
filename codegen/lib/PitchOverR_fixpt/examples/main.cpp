//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: main.cpp
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 10-Aug-2018 16:44:20
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
#include "PitchOverR_fixpt.h"
#include "main.h"
#include "PitchOverR_fixpt_terminate.h"
#include "PitchOverR_fixpt_initialize.h"

// Function Declarations
static unsigned short argInit_ufix16_En6();
static void main_PitchOverR_fixpt();

// Function Definitions

//
// Arguments    : void
// Return Type  : unsigned short
//
static unsigned short argInit_ufix16_En6()
{
  return 0U;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_PitchOverR_fixpt()
{
  unsigned short y;

  // Initialize function 'PitchOverR_fixpt' input arguments.
  // Call the entry-point 'PitchOverR_fixpt'.
  y = PitchOverR_fixpt(argInit_ufix16_En6(), argInit_ufix16_En6());
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
  PitchOverR_fixpt_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_PitchOverR_fixpt();

  // Terminate the application.
  // You do not need to do this more than one time.
  PitchOverR_fixpt_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
