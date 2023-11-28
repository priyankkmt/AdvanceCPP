#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"
#include"headers/physicalProperties.h"

int main()
{
    std::vector<Triangle> triangles;
    Reader reader("D:\\Work_space\\Sketcher\\resources\\cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    std::vector<Triangle> outTriangles=triangulation.getTriangles();

    Properties properties(outTriangles);
     properties.get_surface_area() ;

    Writer writer;
    writer.write("D:\\Work_space\\Sketcher\\resources\\output.txt", outTriangles);
}