#include "../headers/Point3D.h"
#include "../headers/Reader.h"
#include <iostream>
#include <sstream>
#include <fstream>

Reader::Reader(std::string filePath)
{
    mFilePath=filePath;
}

Reader::~Reader()
{

}

void Reader::getTriangles(std::vector<Triangle>& triangles) 
{
    std::ifstream dataFile;
    dataFile.open(mFilePath);
    std::cout<<"Reading triangles"<<std::endl;
    if (!dataFile.is_open()) { 
        std::cout<<"File not exist"<<std::endl;
        return ;
    }

    std::string line;

    while (std::getline(dataFile, line)) 
    {
        if (line.find("vertex") != std::string::npos) 
        {
            std::istringstream iss(line);
            std::string token;
            double x, y, z;
            std::vector<double> coordinates(3);
            iss >> token >> coordinates[0] >> coordinates[1] >> coordinates[2];        
            Point3D point1(coordinates[0], coordinates[1], coordinates[2]);

            std::getline(dataFile,line);
            std::istringstream iss1(line);
            iss1 >> token >> coordinates[0] >> coordinates[1] >> coordinates[2];
            Point3D point2(coordinates[0], coordinates[1], coordinates[2]);

            std::getline(dataFile,line);
            std::istringstream iss2(line);
            iss2 >> token >> coordinates[0] >> coordinates[1] >> coordinates[2];
            Point3D point3(coordinates[0], coordinates[1], coordinates[2]);
            
            Triangle triangle(point1, point2, point3);
            triangles.push_back(triangle);
        }
    }
    dataFile.close();
}