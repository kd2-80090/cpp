
#include<iostream>
using namespace std;
#include"./menu.h"

Emenu menu()
{
    int choice;
    cout<<"\n*************************"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.Enter radius and height of cylinder :"<<endl;
    cout<<"2.Get Volume done :"<<endl;
    cout<<"3.Print Volume :"<<endl;
    cout<<"4.Set new radius of cylinder :"<<endl;
    cout<<"5.Set new height of cylinder :"<<endl;
    cout<<"6.Get radius of cylinder :"<<endl;
    cout<<"7.Get height of cylinder :"<<endl;

    cin>>choice;
    cout<<"\n*************************"<<endl;
    return Emenu(choice);
}