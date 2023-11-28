# Assignment 11: Implementation of maps.
 
## Overview
 
This assignment entails the application of the Map containers within the `get_surface_area()` function, situated in the `src/physicalProperties.cpp` file. Here we have use triangle and corresponding to it ther's area of this triangle. 
 
## Function Definition
 
1. **File location**.
 
    `src\physcialProperties.cpp`

## Implementation Steps

1. **Declare physicalProperties()**
```
   float Properties:: get_surface_area()
    {
    }
```
 
2. **Define physicalProperties() function**.
    - Make a map of pair `Triangle` and `float`.
    ```
    float Properties:: get_surface_area()
    {
        std::map<Triangle,float> mp;
    }
    ```
    - Calculate the surface area of the triangle using `cal_area()`.
    ```
    mp[triangle] = cal_area(triangle.p1(), triangle.p2(), triangle.p3());
    ```
    - Print area of trianles in for loop
    ```
    for(Triangle Triangle : triangles)
    {
        std::cout << "Area of triangle "<<mp[Triangle]<<std::endl;
    }
    ```
3. **Functionality**
    - This sequencial container contain triangles that and it's area.
    - With the use of std::cout print the area corresponding to triangle