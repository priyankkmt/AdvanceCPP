# Assignment 4: File handling in Advance CPP part-2.
 
## Overview
 
This assignment involves reading coordinates data of triangle from .stl files, storing them them in vector of double and writing them. This assignment involves 2 files Reader.cpp and Writer.cpp, using getline(), istringstream, creating Point3D object and populating triangle.
 
## Function Definition
 
1. **File location**.
 
    `src\Reader.cpp`

    `src\Writer.cpp`

## Implementation

1. **Reading triangles data from .stl file**
    - Opening .stl file location `\resources\cubeModel.stl` and implement `getline()` function with if() condition logic to read only vertex points, storing triangles coordinates into vector of double and make Points in Point object.
    `Point3D point1(coordinates[0], coordinates[1], coordinates[2])` from them.
    - Create a Triangle object `Triangle triangle(point1, point2, point3);` and pass point object as parameter `Triangle triangle(point1, point2, point3)`.
    - Make triangles from these points.

2. **Writing this triangle data**.
   - In scr/Writer.cpp file, open datafile `
  dataFile.open(filePath);`.
   - Write the triangles, by running a for loop. And writing tringles data into `\resources\output.txt` by `dataFile << triangle.p1().x() << " " << triangle.p1().y() << " "<< triangle.p1().z() << std::endl;`