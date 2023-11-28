# Assignment 9: Implementation of sequential containers list part 2.
 
## Overview
 
This assignment entails the application of the sequencial containers like list, vector and deque within the `calculateBBox()` function, situated in the `src/BBox.cpp` file. 
 
## Function Definition
 
1. **File location**.
 
    `src\BBox.cpp`


## Implementation Steps

1. **Declare calculateBBox() and overload it**
```
    void calculateBBox(std::list<Triangle> triangles);
```
 
2. **Define calculateBBox() function**.
    - Overload `calculateBBox()` function with list of triangles (`std::list<Trianle> triangles`).
    ```
    void BBox::calculateBBox(std::list<Triangle> triangles)
    {
    }
    ```

3. **Functionality**
    - This sequencial containers contain triangles that perfrom bounding box's calculation in `calculateBBox()`
    function.