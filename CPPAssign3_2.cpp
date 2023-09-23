/*
Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
( write a menu driven code for it)

*/


#include<iostream>
using namespace std;
class tollbooth
{
    private:
        unsigned int t_cars;
        double t_amt;
    public:
        tollbooth()
        {
            this->t_cars=0;
            this->t_amt=0;
        }
        unsigned int payingCar()
        {
            this->t_cars=this->t_cars+1;
            this->t_amt=this->t_amt+0.50;
            return this->t_cars;
        
        }
        unsigned int nopayCar()
        {
            this->t_cars=this->t_cars+1;
            return this->t_cars;
            
        }
        void printOnConsole()
        {
            cout<<"\n************ TOLL PLAZA ***********"<<endl;
            cout<<"Total number of  cars passed by toll = "<<this->t_cars;
            cout<<"\nTotal amount from toll = "<<this->t_amt;
            cout<<"\nNumber of cars who paid the toll = "<<((this->t_amt)/0.50);
            cout<<"\nNumber of cars which did not pay toll  = "<<((this->t_cars)-((this->t_amt)/0.50));
            cout<<"\n************ TOLL PLAZA ***********"<<endl;            
        }
};

enum Emenu
{
    EXIT,
    Add_toll,
    Cars_no_toll,
    Everything_About_toll
};

Emenu menu()
{
    int choice;
    cout<<"**********************"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Add_toll"<<endl;
    cout<<"2.Cars_no_toll"<<endl;
    cout<<"3.Everything_about_toll"<<endl;
    cout<<"Enter your choice = ";
    cin>>choice;
    cout<<"\n**********************"<<endl;
    return Emenu(choice);
}
int main()
{
    Emenu choice ;
    int tot,tot1,tot2;
    tollbooth t;
    while((choice = menu())!=0)
    {
        switch(choice)
        {
            case Add_toll:
                t.payingCar(); 
                break;
            case Cars_no_toll:
                t.nopayCar();
                break;
            case Everything_About_toll:
                t.printOnConsole();
                break;
            default :
                cout<<"Wrong Choice"<<endl;
                break;
        }
    }
    cout<<"Thank You..."<<endl;
}