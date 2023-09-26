
/*
Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().
*/

#include<iostream>
using namespace std;

class Stack
{
    private:
        int index=0;
        int size;
        int *top;
    public:
        Stack()
        {
            this->size = 5;
            this->top = new int[size];

        }
        Stack(int size)
        {
            this->size=size;
            this->top = new int[size];
        }
        void push()
        {
            if(!isFull())
            {
                cout<<"Enter "<<size<<" elements to push : \n";
                for(int i=0;i<size;i++)
                {
                    cin>>*(this->top);
                    this->top++;
                    this->index++;
                }
            }
            else
            {
                cout<<"Stack is full..."<<endl;
            }
        } 
        void pop()
        {
            if(!isEmpty())
            {
                cout<<"Popped element is : \n";
                for(int i=0;i<size;i++)
                {
                    this->top--;
                    cout<< *(this->top)<<endl;
                    this->index--;
                }
            }
            else 
            {  
                cout<<"Stack is empty..."<<endl;
            }
        } 
        void peek()
        {
            if(!isEmpty())
                cout<<"Peek element is : " << *(this->top-1)<<endl;
            else 
            {
                cout<<"Stack is empty..."<<endl;
            }
        }
        int isEmpty()
        {
            return ((this->index)<=0);
        } 
        int isFull()
        {
            return ((this->index)>=(this->size));
        }   
        void print()
        { 
            if(!isEmpty())
            {
                int *st = this->top;
                int i=1;
                cout<<"Element in the statck are : "<<endl;
                while(i<=(this->index))
                {
                    st--;
                    cout<< *st <<endl;
                    i++;
                }
            }
            else
            {
                cout<<"Stack is empty..."<<endl;
            }

            cout<<endl;
        }
};

int main()
{
    int size;
    Stack s1;
    s1.push();
    s1.isFull();
    s1.peek();
    s1.print();
    s1.pop();
    s1.print();
    s1.isEmpty();
    
    cout<<"Enter size for stack : ";
    cin>>size;
    Stack s(size);
    s.push();
    s1.isFull();
    s.peek();
    s.print();
    s.pop();
    s.isEmpty();

    
    return 0;
}


