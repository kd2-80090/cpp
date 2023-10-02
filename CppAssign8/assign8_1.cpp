
/*
Q1. Write a class Distance to hold feet and inches. Overload operator + as member function and ==
operator as friend function. Also, overload ++ operator (to increment inches) as member function
and -- operator as friend function. Overload << and >> operators to accept and display distance.
*/

#include <iostream>
using namespace std;

class Distance
{
private:
    double feet;
    double inches;

public:
    Distance()
    {
        this->inches = 0;
        this->feet = 0;
    }
    Distance(double feet, double inches)
    {
        this->feet = feet;
        this->inches = inches;
    }
    Distance operator+(Distance d)
    {
        Distance res;
        res.feet = this->feet + d.feet;
        res.inches = this->inches + d.inches;
        return Distance(res);
    }
    void operator++()
    {
        this->inches++;
    }

    friend bool operator==(Distance d1, Distance d2);
    friend void operator<<(ostream &out, Distance d);
    friend void operator>>(istream &in, Distance &d);
    friend Distance operator--(Distance obj1);
    friend Distance operator--(Distance &obj1, int);
};
bool operator==(Distance d1, Distance d2)
{
    if ((d1.feet == d2.feet) && (d1.inches == d2.inches))
        return true;
    else
        return false;
}

void operator<<(ostream &out, Distance d)
{
    out << "\nDistance : " << d.feet << "\'" << d.inches << "\"" << endl;
}
void operator>>(istream &in, Distance &d)
{
    cout << "\nEnter feet : ";
    in >> d.feet;
    cout << "\nEnter inches : ";
    in >> d.inches;
}

Distance operator--(Distance obj)
{
    obj.feet--;
    obj.inches--;
    return obj;
}
Distance operator--(Distance &obj, int)
{
    Distance d = obj;
    obj.feet--;
    obj.inches--;
    return d;
}

int main()
{
    Distance d1;
    cin >> d1;
    cout << d1;
    Distance d2;
    cin >> d2;
    cout << d2;
    Distance d3 = d1 + d2;
    cout << "***********************************************************" << endl;
    cout << "_______________________ ( operator + )_____________________";
    cout << d3;
    cout << "\n***********************************************************" << endl;
    cout << "\n***********************************************************" << endl;
    cout << "_____________________ ( operator == ) _____________________\n";
    if (d2 == d1)
        cout << "\nDistance object d1 is equals to Distance object d2";
    else
        cout << "\nDistance object d1 is not equals to Distance object d2";
    cout << "\n***********************************************************" << endl;

    cout << d1;
    cout << "***********************************************************" << endl;
    cout << "_____________________ ( operator ++ )______________________";
    ++d1;
    cout << d1;
    cout << "\n***********************************************************" << endl;

    cout << "Predecrement on d1 ";
    cout << "\n***********************************************************" << endl;
    Distance d4 = --d1; // operator--   predecremet
    cout << "\nd4 : " << d4;
    cout << "\nd1 : " << d1;

    cout << "\n***********************************************************" << endl;
    cout << "Postdecrement on d1 ";
    cout << "\nd1 : " << d1;
    Distance d5 = d1--; // operator--(int) this->d1  postdecremet
    cout << "\nd5 : " << d5;
    cout << "\nd1 : ";
    cout << d1;
    cout << "\n***********************************************************" << endl;

    return 0;
}