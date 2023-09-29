

/*
Q2. Implement following classes. Test all functionalities in main() of each created class. Note that
employee is inherited into manager and salesman. Insted of char[] use string datatype.
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

int main()
{
    Employee e;
    cout<<"----------------------"<<endl;
    cout<<"\nEnter the details for the Employee:  "<<endl;
    cout<<"----------------------"<<endl;
    e.accept();
    e.display();

    // Manager m2(1,2,3);
    Manager m1;
    cout<<"----------------------"<<endl;
    cout<<"\nEnter the details for the Manager:  "<<endl;
    cout<<"----------------------"<<endl;
    m1.accept();
    m1.display();

    // Salesman s;
    // s.display();
    // Salesman s2(1,2,3);
    Salesman s1;
    cout<<"----------------------"<<endl;
    cout<<"\nEnter the details for the Salesman:  "<<endl;
    cout<<"----------------------"<<endl;
    s1.accept();
    s1.display();
    
    // Sales_manager s1;
    // s1.display();
    // Sales_manager s2(1,2.00,30.00,40.00);
    Sales_manager s;
    cout<<"----------------------"<<endl;
    cout<<"\nEnter the details for the Sales Manager:  "<<endl;
    cout<<"----------------------"<<endl;
    s.accept();
    s.display();
    return 0;
}