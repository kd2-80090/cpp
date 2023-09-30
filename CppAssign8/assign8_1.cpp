
/*
Q1. Write a class Distance to hold feet and inches. Overload operator + as member function and ==
operator as friend function. Also, overload ++ operator (to increment inches) as member function
and -- operator as friend function. Overload << and >> operators to accept and display distance.
*/


#include<iostream>
using namespace std;

class Distance
{
    private:
    int feet;
    double inches;
    public:
    Distance()
    {
        this->inches = 0;
        this->feet = 0;
    }
    Distance(int feet,double inches)
    {
        this->feet = feet;
        this->inches = inches;
    }
    void setFeet(int feet)
    {
        this->feet = feet;
    }
    int getFeet()
    {
        return this->feet; 
    }
    void setInches(double inches)
    {
        this->inches = inches;
    }
    int getInches()
    {
        return this->inches;
    void accept()
    {

    }
    void display()
    {

    }
};


int main()
{

}