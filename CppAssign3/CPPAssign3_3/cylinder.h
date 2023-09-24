#include<iostream>
using namespace std;
#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
    private:
        double radius;
        double height;
        double volume;
    public:
        Cylinder();
        Cylinder(double radius,double height);
        void getRadius();
        void setRadius();
        void getHeight();
        void setHeight();
        double getVolume();
        void printVolume();
};

#endif