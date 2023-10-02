

#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    if(num==0 || num==1)
        return 1;
    else if(num>1)
    {
        for(int i=1;i<=num;i++)
            fact *= i; 
        return fact;
    }
    else
        throw "Invalid input(Factorial not possible)";
}

int main()
{
    int num;
    cout<<"Enter number for factorial : ";
    cin>>num;
    try
    {
        cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    }
    catch(char const * error)
    {
        cout<<error<<endl;
    }
    return 0;
}