
/*
Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.
*/

#include <iostream>
using namespace std;

class Time
{
private:
    int *hh;
    int *mm;
    int *ss;

public:
    Time()
    {
    }
    Time(int h, int m, int s)
    {
        this->hh = new int;
        this->mm = new int;
        this->ss = new int;
        *this->hh = h;
        *this->mm = m;
        *this->ss = s;
    }
    int getHour()
    {
        return *this->hh;
    }
    int getMinute()
    {
        return *this->mm;
    }
    int getSeconds()
    {
        return *this->ss ;
    }
    // void acceptTime()
    // {
    //     cout<<"Enter hour :";
    //     cin>>*this->hh;
    //     cout<<"Enter hour :";
    //     cin>>*this->mm;
    //     cout<<"Enter hour :";
    //     cin>>*this->ss;
    // }
    void printTime()
    {
        cout << " " << *this->hh;
        cout << " : " << *this->mm;
        cout << " : " << *this->ss << endl;
    }
    void setHour()
    {
        cout << "Enter hour to set : ";
        cin >> *this->hh;
        *this->hh = *this->hh;
    }
    void setMinute()
    {
        cout << "Enter minute to set : ";
        cin >> *this->mm;
        *this->mm = *this->mm;
    }
    void setSeconds()
    {
        cout << "Enter minutes to set : ";
        cin >> *this->ss;
        *this->ss = *this->ss;
    }
    ~Time()
    {
        delete this->hh;
        delete this->mm;
        delete this->ss;
    }
};

int main()
{
    Time *t[3];
    t[0] = new Time(0, 0, 0);
    t[1] = new Time(5, 15, 42);
    t[2] = new Time(12, 20, 59);
    // for(int i=0;i<2;i++)
    //     t[i] = new Time[i];
    // for(int row=0;row<3;row++)
    // {
    //     cout<<"Enter values for time"<<row<<endl;
    //     t[row]->acceptTime();
    // }
    for (int col = 0; col < 3; col++)
    {
        cout << "\nTime in : " << col << endl;
        t[col]->printTime();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Time for : " << i << endl;
        t[i]->setHour();
        t[i]->setMinute();
        t[i]->setSeconds();
    }
    for (int i = 0; i < 3; i++)
    {
        cout<< "Time in : " << i << "\n" ;
        cout<< (t[i]->getHour() ) <<" : "<<(t[i]->getMinute()) << " : " << (t[i]->getSeconds())<<endl;
    }

    for (int i = 0; i < 3; i++)
        delete t[i];
    // delete t[0];
    // delete t[1];
    // return 0;
}