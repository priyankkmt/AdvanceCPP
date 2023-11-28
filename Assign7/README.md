# Assignment 7: Implementation mutable lambda expression with Generalized capture with initialization.
 
## Overview
 
This assignment involves the utilization of mutable lambda expressions located in the file path `src/physicalProperties`. The lambda expression returns a string obtained from the user as a local copy of output string in the **capture clause**. 
 
## Function Definition
 
1. **File location**.
 
    `src\physicalProperties.cpp`

2. **Functionality**.
    - It returns the updated string which is copy of local ouput string in  **Capture Clause**.

## Implementation Steps
 
1. **Delcare lambda expression**.

    Declare lambda expression, in `get_surface_area()` location `/src/Physical_properties.cpp`.
    Use **mutable** keyword after arguments
    ```
    auto lambda = [output = "Area's of triangles in 3D object is "]()
    {
        return output;
    };
    ```
2. **Call lambda expression**.

    Call this lambda expression from `get_surface_area` and print it's output as `std::cout<<lambda(area)<<std::endl;`.
    Location of get_surface_area function is ``/src/Physical_properties.cpp``

## Uses of lambda expression

1. **Input to lambda expression**.
    - Input to lambda expression is copy of local string output("Area of triangles").
2. **Output to lambda expression**
    - Output to lambda expression is a string ("Area's of triangles in 3D object is ").
    - Use std::cout to print the output string.
