# Buggy code for CS 190 from CS 32

## Contributed by Qiru Hu


### Programming question

This lab for CS 32 requires the ability to debug with multiple files. The executable is built with classes and methods from __dataAQ__, __demogData__, __stateDemog__, __hospitalData__, __stateHosp__, and __parse__. 
Compile the files using "Make". Run the test file with "./testStates".

 >   testStates.cpp: The student failed 2 tests in testStates.cpp which test for sorting states based on hospital rating. Here's the error message he get: 
  "Testing state data aggregation query...
    FAILED: lowHosp
      Expected: DC Actual: WI
    FAILED: highHosp
      Expected: WI Actual: DC
  PASSED: highMort
  PASSED: highReadmit"

### Conceptual questions
*  How to sort a vector using C++ standard library built in sort function?
*  What is a compare predicates?
*  How does sort works?





