
/*
Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.
*/

#include<iostream>
using namespace std;
namespace NStudent
{
    class Student
    {
        private:
                int rollno;
                string name;
                int marks;
        public:
            void initStudent()
            {
                this->rollno=0;
                this->name="";
                this->marks=0;
            }
            void acceptStudentFromConsole()
            {
                cout<<"Enter roll number of student:";
                cin>>this->rollno;
                cout<<"Enter name of student:";
                cin>>this->name;
                cout<<"Enter marks of student:";
                cin>>this->marks;
            }
            void printStudentOnConsole()
            {
                cout<<"*****Student Details*****\n"<<"Roll no  : "<<this->rollno<<"\nName of Student   :"<<this->name<<"\nMarks  :"<<this->marks<<"\n-------------------------"<<endl;
            }
    };
}
//using namespace NStudent
int main()
{
    int choice;
    NStudent::Student s1;
    do
    {
        cout<<"1.Default Details\n2.Print Details of student\n3.Accept Details of Students\n0.Exit\n";
        cout<<"Enter your choice:\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                    s1.initStudent();
                    s1.printStudentOnConsole();
                    break;
            case 2:
                    s1.printStudentOnConsole();
                    break;
            case 3:
                    s1.acceptStudentFromConsole();
                    break;
        }
    } while (choice!=0);
    return 0;
}