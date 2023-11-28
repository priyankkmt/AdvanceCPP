# Assignment 6: Implementation mutable lambda expression.
 
## Overview
 
This task involves the utilization of mutable lambda expressions located in the file path `src/physicalProperties`. The lambda expression takes a floating-point value, 'area,' and returns a string obtained from the user as a reference using the reference operator in the capture clause.
 
## Function Definition
 
1. **File location**.
 
    `src\physicalProperties.cpp`

2. **Functionality**.
    - It returns the updated string which is passed to lambda function throung reference in **Capture Clause**.

## Implementation Steps
 
1. **Delcare lambda expression**.

    Declare lambda expression, in `get_surface_area()` location `/src/Physical_properties.cpp`.
    Use **mutable** keyword after arguments
    ```
    auto lambda = [&output](float area)
    {
        output = "Area's of triangles in 3D object is " ;
        output += std::to_string( area );
        return output;
    };
    ```
2. **Call lambda expression**.

    Call this lambda expression from `get_surface_area` and print it's output as `std::cout<<lambda(area)<<std::endl;`.
    Location of get_surface_area function is ``/src/Physical_properties.cpp``

## Uses of lambda expression

1. **Input to lambda expression**.
    - Input to lambda expression is a floating point number.
    - A string ("Area of triangles") reference to the lambda expression.
2. **Output to lambda expression**
    - Output to lambda expression is a string ("Area's of triangles in 3D object is 6").
    - Use std::cout to print the output string.
