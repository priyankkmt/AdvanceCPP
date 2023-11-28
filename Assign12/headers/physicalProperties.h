#pragma once

#include<vector>

#include"Triangle.h"

class Properties{
    public:
    Properties(std::vector<Triangle>& triangles);
    float get_surface_area();
    ~Properties();
    private:
    std::vector<Triangle> triangles;
    float cal_area(Point3D const &p1, Point3D const &p2, Point3D const &p3);
    float cal_distance(Point3D const &p1, Point3D const &p2);
    virtual void display(float area);
};