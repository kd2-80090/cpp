/*Q1. Implement a Stack class using C++ templates. Test stack operations on Stack<int>,
Stack<double> and Stack<Box>. for above program*/



#include <iostream>
using namespace std;

template <typename T>
class Stack
{
private:
    int index = 0;
    int size;
    T *top;

public:
    Stack()
    {
        this->size = 5;
        top = new T[size];
    }

    Stack(int size)
    {
        this->size = size;
        top = new T[size];
    }

    ~Stack()
    {
        delete[] top;
    }

    void push(T element)
    {
        if (!isFull())
        {
            top[index++] = element;
        }
        else
            cout << "Stack is full." << endl;
    }

    T pop()
    {
        if (!isEmpty())
        {
            return top[--index];
        }
        else
        {
            cout << "Stack is empty." << endl;
            throw runtime_error("Stack is empty.");
        }
    }

    T peek()
    {
        if (!isEmpty())
            return top[index - 1];
        else
        {
            cout << "Stack is empty." << endl;
            throw runtime_error("Stack is empty.");
        }
    }

    bool isEmpty()
    {
        return (index <= 0);
    }

    bool isFull()
    {
        return (index >= size);
    }

    void print()
    {
        if (!isEmpty())
        {
            cout << "Elements in the stack are : \n";
            for (int i = index - 1; i >= 0; i--)
            {
                cout << top[i] << endl;
            }
        }
        else
            cout << "Stack is empty." << endl;

        cout << endl;
    }
};

class Box
{
private:
    int length;
    int width;

public:
    Box()
    {
        this->length = 0;
        this->width = 0;
    }
    Box(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
    void accept()
    {
        cout << "Enter Length of box : ";
        cin >> this->length;
        cout << "Enter Width of box : ";
        cin >> this->width;
    }
    void display()
    {
        cout << "Length of box : " << this->length << endl;
        cout << "Width of box : " << this->width << endl;
    }
    int getID() const
    {
        return length * width;
    }
};

int main()
{
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    while (!intStack.isEmpty())
    {
        cout << "Popped from intStack: " << intStack.pop() << endl;
    }

    Stack<double> doubleStack(3);
    doubleStack.push(1.1);
    doubleStack.push(2.2);
    doubleStack.push(3.3);

    while (!doubleStack.isEmpty())
    {
        cout << "Popped from doubleStack: " << doubleStack.pop() << endl;
    }

    Stack<Box> boxStack;
    boxStack.push(Box(101, 5));
    boxStack.push(Box(102, 6));
    boxStack.push(Box(103, 7));

    while (!boxStack.isEmpty())
    {
        Box box = boxStack.pop();
        cout << "Popped from boxStack: Box ID = " << box.getID() << endl;
    }

    return 0;
}






























// #include <iostream>
// using namespace std;

// template <typename T>
// class Stack
// {
//     int index = 0;
//     int size;
//     T *top;

// public:
//     Stack()
//     {
//         this->size = 5;
//         top = new T[size];
//     }

//     Stack(int size)
//     {
//         this->size = size;
//         top = new T[size];
//     }
    

//     void push()
//     {
//         if (!isFull())
//         {
//             cout << "Enter " << size << " Elements : \n";

//             for (int i = 0; i < size; i++)
//             {
//                 cin >> top[i];
//                 index++;
//             }
//         }
//         else
//             cout << "Stack is full." << endl;
//     }

//     void pop()
//     {
//         if (!isEmpty())
//         {
//             cout << "Popped elements : \n";
//             for (int i = 0; i < size; i++)
//             {
//                 index--;
//                 cout << top[index] << endl;
//                 ;
//             }
//         }
//         else
//             cout << "Stack is empty." << endl;
//     }

//     void peek()
//     {
//         if (!isEmpty())
//             cout << "Peek Element is: " << top[index - 1] << endl;
//         else
//             cout << "Stack is empty." << endl;
//     }

//     bool isEmpty()
//     {
//         return (index <= 0);
//     }

//     bool isFull()
//     {
//         return (index >= size);
//     }

//     void print()
//     {
//         int tindex = index;
//         if (!isEmpty())
//         {
//             cout << "Elements in the stack are : \n";
//             for (int i = 0; i < size; i++)
//             {
//                 tindex--;
//                 cout << top[tindex] << endl;
//             }
//         }
//         else
//             cout << "Stack is empty." << endl;

//         cout << endl;
//     }

//     ~Stack()
//     {
//         delete[] top;
//     }
// };


// int main()
// {
//     int size;
//     Stack<int> s1;
//     s1.push();

//     s1.peek();

//     s1.print();
//     s1.pop();
//     s1.print();

//     cout << "Enter Size of stack: ";
//     cin >> size;
//     Stack<double> s2(size);

//     s2.push();

//     s2.peek();

//     s2.print();
//     s2.pop();

//     return 0;
// }