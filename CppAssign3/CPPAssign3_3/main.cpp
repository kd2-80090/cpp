

#include"./menu.h"
#include"./cylinder.h"

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

