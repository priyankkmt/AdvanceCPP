# Assignment 1: Implementation of classes and member functions.
 
## Overview
 
In this assignment, we are implementing classes and member functions.
 
## Implementation Steps
 
1. **Declared class `Triangle`**.
 
```
class Triangle
{
public:
    Triangle(Point3D p1, Point3D p2, Point3D p3);
    ~Triangle();
    Point3D p1();
};
```
 
3. **Defined `constructor`, `destructor`, and member function in `Triangle` class**.
```
Triangle::Triangle(Point3D p1, Point3D p2, Point3D p3)
:mP1(0,0,0),
mP2(0,0,0),
mP3(0,0,0)
{
    mP1=p1;
    mP2=p2;
    mP3=p3;
}

Triangle::~Triangle()
{
}

Point3D Triangle::p1()
{
    return mP1;
}
```
 
4. **Defined a vector of `triangles` in main and taken datatype as `triangle`**.
 
```
std::vector<Triangle> triangles;
```
5. **Created object of `Reader`, `Triangulation` and pass triangles as argument in reader and trigulation**.
 
```
    Reader reader("D:\\Work_space\\Sketcher\\resources\\cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);
```
 
 6. **Created vector of triangles and store value from `triangulation` in `outTrianlges`**.
 
```
    std::vector<Triangle> outTriangles=triangulation.getTriangles();

    Properties properties(outTriangles);
```
6. **Created object of `Writer` and pass outTriangles in it**.
```
    Writer writer;
    writer.write("D:\\Work_space\\Sketcher\\resources\\output.txt", outTriangles);
```
 
7. **File location**
 
`function defination`-src\Triangle.cpp
 
**Test**
`Test code`-main.cpp