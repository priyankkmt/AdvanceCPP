# Assignment 13 - Implementation of Interfacing C++ Functions with C Code

## Overview

This assignment involves utilizing **C** code to implement a specific part of the program. The concept is generally applicable to various languages, with only the keywords or methods differing. The primary objective is to enhance program performance by directly treating a section of code as a **C** program.

## Function Declaration and Definition

1. **Function File:**
   - **Function Declaration:** 
   The file `/src/print.h` contains the portion of the code intended to be implemented as a **C** function but referenced through a **C++** file.
   - A macro `#ifdef __cplusplus` in this file recognizes the file it is being included in. If it is included in a **C++** file, it will use `extern "C" {}`.
   - In the file `/src/print.cpp`, the function `void print()` is implemented as follows:

   ```cpp
   void print()
   {
       printf("Area of triangles is : ");
   }
    ```


Certainly! Here's a refreshed version of your README with improved formatting and clarity:

markdown
Copy code
# Assignment 13 - Implementation of Interfacing C++ Functions with C Code

## Overview

This assignment involves utilizing **C** code to implement a specific part of the program. The concept is generally applicable to various languages, with only the keywords or methods differing. The primary objective is to enhance program performance by directly treating a section of code as a **C** program.

## Function Declaration and Definition

1. **Function File:**
   - **Function Declaration:** The file `/src/printLib.h` contains the portion of the code intended to be implemented as a **C** function but referenced through a **C++** file.
   - A macro `#ifdef __cplusplus` in this file recognizes the file it is being included in. If it is included in a **C++** file, it will use `extern "C" {}`.
   - In the file `/src/printLib.cpp`, the function `void printMsg()` is implemented as follows:

   ```cpp
   void printMsg()
   {
       printf("Error! File Not Found!\n");
   }
    -The print() function prints area information.
## Usage:

In the file /src/physicalProperties.cpp, the above file is included. 

The function `float Properties::get_surface_area()` utilizes the void print() function.
When the reader is unable to read the file, it calls the function to print an error on the console.
The use of the extern "C" keyword is to inform the C++ compiler not to perform name mangling while writing symbols in the ObjectDump file.