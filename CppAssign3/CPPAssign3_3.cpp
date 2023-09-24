

/*
Q3. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.
*/



#include<iostream>
using namespace std;

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

enum Emenu
{
    EXIT,
    ACCEPT_CYLINDER_DETAILS,
    GET_VOLUME,
    PRINT_CYLINDER_VOLUME,
    SET_RADIUS,
    SET_HEIGHT,
    GET_RADIUS,
    GET_HEIGHT
    
};
Emenu menu();

int main()
{
    int Vol;
    Emenu choice;
    double radius,height;
    Cylinder c;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case ACCEPT_CYLINDER_DETAILS :
                cout<<"Enter radius of cylinder : ";
            	cin>>radius;
            	cout<<"Enter height of cylinder : ";
            	cin>>height;
            	c=Cylinder(radius,height);
                break;
            case GET_VOLUME :
                c.getVolume();
                break;
            case PRINT_CYLINDER_VOLUME :
            	c.printVolume();
                break;
            case SET_RADIUS :
                c.setRadius();
                break;
            case SET_HEIGHT :
                c.setHeight();
                break;
            case GET_RADIUS :
                c.getRadius();
                break;
            case GET_HEIGHT :
                c.getHeight();
                break;
            default:
                cout<<"Wrong input"<<endl;
                break;
        }
    }
    cout<<"Thank YOU.....:)"<<endl;
}

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

Emenu menu()
{
    int choice;
    cout<<"\n*************************"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.Enter radius and height of cylinder :"<<endl;
    cout<<"2.Get Volume done :"<<endl;
    cout<<"3.Print Volume :"<<endl;
    cout<<"4.Set new radius of cylinder :"<<endl;
    cout<<"5.Set new height of cylinder :"<<endl;
    cout<<"6.Get radius of cylinder :"<<endl;
    cout<<"7.Get height of cylinder :"<<endl;

    cin>>choice;
    cout<<"\n*************************"<<endl;
    return Emenu(choice);
}

