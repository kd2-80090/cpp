
#include"./cylinder.h"

Cylinder::Cylinder()
{
    this->radius = 0;
    this->height = 0;
    this->volume = 0;
}
Cylinder :: Cylinder(double radius,double height):radius(radius),height(height)
{
    
}
void Cylinder :: getRadius()
{
    cout<<"Radius is "<<this->radius;
}
void Cylinder :: setRadius()
{
    cout<<"Enter radius to set : ";
    cin>>this->radius;
    this->radius = this->radius;
}
void Cylinder :: getHeight()
{
    cout<<"Height is "<<this->height;
}
void Cylinder :: setHeight()
{
    cout<<"Enter height to set : ";
    cin>>this->height;
    this->height= this->height;
}
double Cylinder :: getVolume()
{
    this->volume = (3.14*this->radius*this->radius*this->height);
	return this->volume;
}
void Cylinder :: printVolume()
{
    cout<<"\nVolume is "<<this->volume<<endl;
}
