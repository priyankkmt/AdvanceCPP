# Assignment 8: Implementation of iterator.
 
## Overview
 
This assignment entails the application of the iterator keyword to facilitate iteration within the `calculateBBox()` function, situated in the `src/BBox.cpp` file. Within this context, the iterator is specifically of the type `std::vector<Triangle>::iterator` and is denoted by the identifier 'it.' The iterator 'it' is employed to traverse a vector containing instances of the `Triangle class`, allowing for the systematic examination and manipulation of each element during the course of the iteration
 
## Function Definition
 
1. **File location**.
 
    `src\BBox.cpp`

2. **Functionality of the iterator**
    - To allow user to use container while hiding the structure of the container.


## Implementation Steps
 
1. **Define calculateBBox() function**.
    - Give `std::vector<Triangle> triangles` as parameter to `calculateBBox()` function and set mMax and mMin.
    ```
    void BBox::calculateBBox(std::vector<Triangle> triangles)
    {

        mMax = Point3D(__DBL_MIN__,__DBL_MIN__,__DBL_MIN__);
        mMin = Point3D(__DBL_MAX__,__DBL_MAX__,__DBL_MAX__);

    }
    ```
2. **Use iterator in for loop**.
    - Declare iterator to iterate over vector of `Triangle`.
    - Use iterator to iterate over vector of triangles in for loop.
    - In for loop, deframe the iterator to acces it `*it`.
```
    std::vector<Triangle>::iterator it;
    for( it = triangles.begin(); it != triangles.end(); ++it)
    {
        Point3D p1=(*it).p1();
    }
```