


/*
Q3. Using the Q1 from assignment 6. Create an array of 10 employees. Provide menu driven code
for the functionalities: Insted of char[] use string datatype
1. Accept Employee
2. Display the count of all employees with respect to
designation
3. Display respective designation employees
*/


#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
    }
    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }
    void accept()
    {
        cout << "\nEnter Employee id : ";
        cin >> this->id;
        cout << "Enter salary : ";
        cin >> this->sal;
    }
    void display()
    {
        cout << "Employee ID : " << this->id << endl;
        cout << "Salary : " << this->sal << endl;
    }
    int getId()
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
};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman() : Employee(0, 0)
    {
        this->comm = 0;
    }
    Salesman(float comm)
    {
        this->comm = comm;
    }
    Salesman(int id, float sal, float comm) : Employee(id, sal)
    {
        this->comm = comm;
    }
    void accept()
    {
        Employee :: accept();
        cout << "Enter Commision : ";
        cin >> this->comm;
    }
    void display()
    {
        cout<<"----------------------"<<endl;
        Employee :: display();
        cout << "Commision : " << this->comm << endl;
    }
    float getComm()
    {
        return this->comm;
    }
    void setComm(float comm)
    {
        this->comm = comm;
    }
protected:
    void displaySalesman()
    {
        cout<<"Commision : "<<this->comm<<endl;
    }
    void acceptSalesman()
    {
        cout<<"Enter commision : ";
        cin>>this->comm;
    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager() : Employee(0, 0)
    {
        this->bonus = 0;
    }
    Manager(float bonus)
    {
        this->bonus;
    }
    Manager(int id, float sal, float bonus) : Employee(id, sal)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        Employee :: accept();
        cout << "Enter bonus : ";
        cin >> this->bonus;
    }
    void display()
    {
        cout<<"----------------------"<<endl;
        Employee :: display();   
        cout << "Bonus : " << this->bonus << endl;
    }
    float getBonus()
    {
        return this->bonus;
    }
    void setBonus(float bonus)
    {
        this->bonus = bonus;
    }
protected:
    void displayManager()
    {
        cout<<"Bonus : "<<this->getBonus()<<endl;
    }
    void acceptManager()
    {
        cout<<"Enter bonus : ";
        cin>>this->bonus;
    }
};

class Sales_manager : public Salesman, public Manager
{
public:
    Sales_manager()
    {
    
    }
    Sales_manager(int id,float sal,float comm,float bonus) : Employee(id,sal),Salesman(comm),Manager(bonus)
    {
        
    }
    void accept()
    {
        Employee :: accept();
        Salesman :: acceptSalesman();
        Manager :: acceptManager(); 
    }
    void display()
    {
        cout<<"----------------------"<<endl;
        Employee :: display();
        Salesman :: displaySalesman();
        Manager :: displayManager();
        cout<<"----------------------"<<endl;
    }
};
enum EMENU
{
    EXIT,
    EACCEPT,
    EDISPLAY_COUNT_EMP,
    EDISPLAY_DESGINAION_EMP
};

enum EACCEPT
{
    ACCEPT_SALESMAN,
    ACCEPT_MANAGER,
    ACCEPT_SALESMAN_MANAGER
};

enum EDISPLAY_COUNT_EMP
{
    DISPLAY_COUNT_SALESMAN,
    DISPLAY_COUNT_MANAGER,
    DISPLAY_COUNT_SALESMAN_MANAGER
};

enum EDISPLAY_DESGINAION_EMP
{
    DISPLAY_SALESMAN,
    DISPLAY_MANAGER,
    DISPLAY_SALESMAN_MANAGER,
    DISPLAY_ALL_EMP
};

EACCEPT m1()
{
    int choice;
    cout<<"*******************************************";
    cout<<"\n0.EXIT";
    cout<<"\n1.ACCEPT_EMPLOYEE";
    cout<<"\n2.DISPLAY_COUNT_ALL_EMPLOYEE";
    cout<<"\n3.DISPLAY_RESPECTIVE_DESIGNATION_EMPLOYEE";
    cout<<"*******************************************";
    return EACCEPT(choice);
}

EDISPLAY_COUNT_EMP m2()
{
    int choice;
    cout<<"*******************************************";
    cout<<"\n0.EXIT";
    cout<<"\n1.ACCEPT_EMPLOYEE";
    cout<<"\n2.DISPLAY_COUNT_ALL_EMPLOYEE";
    cout<<"\n3.DISPLAY_RESPECTIVE_DESIGNATION_EMPLOYEE";
    cout<<"*******************************************";
    return EDISPLAY_COUNT_EMP(choice);
}

EDISPLAY_DESIGNATION_EMP m3()
{
    int choice;
    cout<<"*******************************************";
    cout<<"\n0.EXIT";
    cout<<"\n1.SALESMAN";
    cout<<"\n2.MANAGER";
    cout<<"\n3.SALES_MANAGER";
    cout<<"\n4.ALL_EMPLOYEE";
    cout<<"*******************************************";
    return EDISPLAY_DESGINAION_EMP(choice);
}

EMENU menu()
{
    int choice;
    cout<<"*******************************************";
    cout<<"\n0.EXIT";
    cout<<"\n1.ACCEPT_EMPLOYEE";
    cout<<"\n2.DISPLAY_COUNT_ALL_EMPLOYEE";
    cout<<"\n3.DISPLAY_RESPECTIVE_DESIGNATION_EMPLOYEE";
    cout<<"*******************************************";
    return EMENU(choice);
}

int main()
{

    // Employee e;
    // cout<<"----------------------"<<endl;
    // cout<<"\nEnter the details for the Employee:  "<<endl;
    // cout<<"----------------------"<<endl;
    // e.accept();
    // e.display();

    // // Manager m2(1,2,3);
    // Manager m1;
    // cout<<"----------------------"<<endl;
    // cout<<"\nEnter the details for the Manager:  "<<endl;
    // cout<<"----------------------"<<endl;
    // m1.accept();
    // m1.display();

    // // Salesman s;
    // // s.display();
    // // Salesman s2(1,2,3);
    // Salesman s1;
    // cout<<"----------------------"<<endl;
    // cout<<"\nEnter the details for the Salesman:  "<<endl;
    // cout<<"----------------------"<<endl;
    // s1.accept();
    // s1.display();
    
    // // Sales_manager s1;
    // // s1.display();
    // // Sales_manager s2(1,2.00,30.00,40.00);
    // Sales_manager s;
    // cout<<"----------------------"<<endl;
    // cout<<"\nEnter the details for the Sales Manager:  "<<endl;
    // cout<<"----------------------"<<endl;
    // s.accept();
    // s.display();

    EMENU choice;
    EACCEPT c1;
    EDISPLAY_COUNT_EMP c2;
    EDISPLAY_DESGINAION_EMP c3;
    while((choice = menu())!=0)
    {
        switch (choice)
        {
        case EACCEPT:
            while((c1 = m1())!=0)
            {
                switch (c1)
                {
                    case ACCEPT_SALESMAN:
                        
                        break;
                    case ACCEPT_MANAGER:
                        
                        break;
                    case ACCEPT_SALESMAN_MANAGER:
                        
                        break;
                    default:
                        break;
                }
            }
            break;
        case EDISPLAY_COUNT_EMP:
            while((c3 = m2())!=0)
            {
                switch (c3)
                {
                    case DISPLAY_COUNT_SALESMAN:
                        
                        break;
                    case DISPLAY_COUNT_MANAGER:
                        
                        break;
                    case DISPLAY_COUNT_SALESMAN_MANAGER:
                        
                        break;
                    default:
                        break;
                }
            }
            break;
        case EDISPLAY_DESGINAION_EMP:
            while((c4 = m3())!=0)
            {
                switch (c4)
                {
                    case DISPLAY_SALESMAN:
                        
                        break;
                    case DISPLAY_MANAGER:
                        
                        break;
                    case DISPLAY_SALESMAN_MANAGER:
                        
                        break;
                    case DISPLAY_ALL_EMP:

                        break;
                    default:
                        break;
                }
            }
                    break;
        default:
            break;
        }
    }
    return 0;
}


