# Assignment 3: File handling in CPP.
 
## Overview
 
This assignment involves reading .stl files, storing them them in vector of double and writing them. This assignment involves 2 files Reader.cpp and Writer.cpp. 
 
## Function Definition
 
1. **File location**.
 
    `src\Reader.cpp`

    `src\Writer.cpp`

## Implementation

1. **Reading triangles data from .stl file**
    - Opening .stl file and storing triangles coordinates into vector of double and make Points in Point object 
    `Point3D point1(coordinates[0], coordinates[1], coordinates[2])` from them.
    - Create a Triangle object and pass point object as parameter `Triangle triangle(point1, point2, point3)`.
    - Make triangles from these points.

2. **Writing this triangle data**.
   - In scr/Writer.cpp file, open datafile `
  dataFile.open(filePath);`.
   - Write the triangles, `dataFile << triangle.p1().x() << " " << triangle.p1().y() << " "<< triangle.p1().z() << std::endl;`