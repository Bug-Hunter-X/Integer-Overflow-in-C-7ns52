# Integer Overflow Bug in C

This repository demonstrates a simple integer overflow bug in C and its solution.

## Bug Description

The `bug.c` file contains code that could lead to an integer overflow. The code increments a pointer to an integer value, potentially exceeding the maximum limit for integers.  This can lead to unexpected and unpredictable behavior.

## Solution

The `bugSolution.c` file presents a solution that addresses this issue by checking for potential overflow before performing the increment operation.  This robust approach ensures program stability and prevents unexpected results.

## How to Reproduce

1. Clone this repository.
2. Compile `bug.c` and run it. Observe the potential unexpected result.
3. Compile `bugSolution.c` and run it. Observe the improved behavior and safety from potential integer overflow. 
