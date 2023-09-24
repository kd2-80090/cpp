
/*
Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.
*/


#include<iostream>
using namespace std;

class box
{
    private:
        int length;
        int width;
        int height;
    public:
        box(int length,int width,int height) : length(length),width(width),height(height)
        {
            
        }  
         int showVolume()
        {
            return length * width * height;
        }      
};
       
enum Emenu
{
    EXIT,
    ADD_DETAILS,
    SHOW_VOLUME
};
Emenu menu()
{
    int choice;
    cout<<"\n***********************\n";
    cout<<"0.EXIT"<<endl;
    cout<<"1.Add_Details"<<endl;
    cout<<"2.Show_Volume"<<endl;
    cout<<"Enter your choice = "
    cin>>choice;
    cout<<"***********************\n";
    return Emenu(choice);
}
int main()
{
    Emenu choice;
    box b1(0,0,0);
    int volume;
    while((choice=menu())!=0)
    {
        switch (choice)
        {
        case ADD_DETAILS:
            
            int l, w, h;
            cout << "Enter length of box :";
            cin>>l;
            cout<<"\nEnter width of box :";
            cin>>w;
            cout<<"\nEnter height of box: ";
            cin >> h;
            b1 = box(l, w, h); // Create a new box with the provided dimensions
            break;
        
        case SHOW_VOLUME:
            volume = b1.showVolume();
            cout<<"Volume is "<<volume;
            break;
        default:
            cout<<"Wrong Input...\nSorry for inconvinience"<<endl;
            break;
        }
    }
    cout<<"\nThank you for using our app...:)";

}