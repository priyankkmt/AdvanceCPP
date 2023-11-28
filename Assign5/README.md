# Assignment 5: Implementation lambda expression for subtraction.
 
## Overview
 
This assignment includes, lambda expression to subtract 2 number without reference.
 
## Function Definition
 
1. **File location**.
 
    `src\Physical_properties.cpp`
2. **Functionality**.
    - It returns the subtraction of 2 numbers.

## Implementation Steps
 
1. **Delcare lambda expression**.

    Declare lambda expression, in `Physical_properties.cpp` location `/src/Physical_properties.cpp`.
    ```
    auto sub = [](int a,int b){return a-b;};
    ```
2. **Call lambda expression**.

    Call this lambda expression from `cal_distance` function like `sub(p1.x(),p2.x())`.
    Location of cal_distance function is ``/src/Physical_properties.cpp``

