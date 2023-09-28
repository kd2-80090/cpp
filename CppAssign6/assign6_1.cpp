

/*
Q1. Implement following classes. Test all functionalities in main().Insted of char[] use string
datatype

*/

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << " ENTER DATE ";
        cout << "\nEnter day :";
        cin >> this->day;
        cout << "\nEnter month";
        cin >> this->month;
        cout << "\nEnter year";
        cin >> this->year;
    }
    void displayDate()
    {
        cout << this->day << "/" << this->month << "/" << this->year << endl;
    }
    int getDay()
    {
        return this->day;
    }
    void setDay(int day)
    {
        this->day = day;
    }
    int getMonth()
    {
        return this->month;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    int getYear()
    {
        return this->year;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    // bool isLeap()
    // {
    //     if ()

    //         else

    //             return
    // }
};

class Employee
{
private:
    int id;
    float sal;
    string dept;
    Date doj;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = "";
    }
    Employee(int id, float sal, string dept, int day, int month, int year) : doj(day,month,year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    void acceptEmployee()
    {
        cout << "Enter Employee Details";
        cout << "\nEnter Employee id : ";
        cin >> this->id;
        cout << "\nEnter salary : ";
        cin >> this->sal;
        cout << "\nEnter department : ";
        cin >> this->dept;
        cout<<"\nEnter date of joining : ";
        doj.acceptDate();
    }
    void displayEmployee()
    {
        cout << "********* EMPLOYEE DETAILS *********" << endl;
        cout << "Employee ID : " << this->id << endl;
        cout << "Salary : " << this->sal << endl;
        cout << "Department : " << this->dept << endl;
        cout << "Date of Joining : ";
        doj.displayDate();
    }
    int getID()
    {
        return this->id;
    }
    void setId(int id)
    {
        this->id = id;
    }
    float getSal()
    {
        return this->sal;
    }
    void setSal(int sal)
    {
        this->sal = sal;
    }
    string getDept()
    {
        return this->dept;
    }
    void setDept(string dept)
    {
        this->dept = dept;
    }
    void getDoj()
    {
        cout<<"Date of Joining : ";
        cout<<doj.getDay()<<"/"<<doj.getMonth()<<"/"<<doj.getYear()<<endl;
    }
    void setDoj(Date d)
    {
        cout<<"Enter date of joining : ";
        d.setDay();
        d.setDay();
        d.setMonth();
    }
};



class Person
{
private:
    string name;
    string addr;
    Date birth_date;

public:
    Person()
    {
        this->name = "";
        this->addr = "";
    }
    Person(string name, string addr,int day,int month,int year) : birth_date(day,month,year)
    {
        this->name = name;
        this->addr = addr;
    }
    void acceptPerson()
    {
        cout << "Enter Person Details" << endl;
        cout << "Enter person name : ";
        cin >> this->name;
        cout << "\nEnter address : ";
        cin >> this->addr;
        cout<<"\nEnter birth date :";
        birth_date.acceptDate();
    }
    void displayPerson()
    {
        cout << "********* PERSON DETAILS *********" << endl;
        cout << "Name : " << this->name << endl;
        cout << "Address : " << this->addr << endl;
        cout << "Birth Date : ";
        birth_date.displayDate();
    }
    string getName()
    {
        return this->name = name;
    }
    void setName(string name)
    {
        cout<<"";
        this->name = name;
    }
    string getAddr()
    {
        return this->addr;
    }
    void setAddr()
    {
        this->addr = addr;
    }
    void getBirthdate()
    {
        cout<<"BirthDate : ";
        cout<<birth_date.getDay()<<"/"<<birth_date.getMonth()<<"/"<<birth_date.getYear()<<endl;
    }
    void setBirthdate(Date d)
    {
        cout<<"Enter BirthDate : "
        d.setDay();
        d.setMonth();
        d.setYear();
    }
};

int main()
{
    // Date d;
    Employee e;
    Person p;
    // d.displayDate();
    // e.acceptEmployee();
    // e.displayEmployee();
    // p.acceptPerson();
    // p.displayPerson();
    // e.getDoj();
    p.setBirthdate();
    p.getBirthdate();

    return 0;
}
