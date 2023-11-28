# Assignment 9: Implementation of sequential containers list, vector and deque.
 
## Overview
 
This assignment entails the application of the sequencial containers like list, vector and deque within the `calculateBBox()` function, situated in the `src/BBox.cpp` file. There are 2 overload function of `calculateBBox()` which contain list or deque as parameter. The default function contains a vector of triangle and then overload with list of triangles and then deque of triangles.
 
## Function Definition
 
1. **File location**.
 
    `src\BBox.cpp`


## Implementation Steps

1. **Declare calculateBBox() and overload it**
```
    void calculateBBox(std::vector<Triangle> triangles);
    void calculateBBox(std::list<Triangle> triangles);
    void calculateBBox(std::deque<Triangle> triangles);
```
 
2. **Define calculateBBox() function**.
    - Give `std::vector<Triangle> triangles` as parameter to `calculateBBox()` function.
    ```
    void BBox::calculateBBox(std::vector<Triangle> triangles)
    {

    }
    ```
    - Overload `calculateBBox()` function with list of triangles (`std::list<Trianle> triangles`).
    ```
    void BBox::calculateBBox(std::list<Triangle> triangles)
    {
    }
    ```
    - Then overload `calculateBBox()` function with deque of triangles (`std::deque<Triangle> triangles`).
    ```
    void BBox::calculateBBox(std::deque<Triangle> triangles)
    {
    }
    ```

3. **Functionality**
    - This sequencial containers contain triangles that perfrom bounding box's calculation in `calculateBBox()`
    function.