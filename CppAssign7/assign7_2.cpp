
/*
Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
*/

#include<iostream>
#include<string>
using namespace std;

class Products
{
protected:
    int id;
    string title;
    double price;

public:
    Products()
    {

    }
    Products(int id,string title,double price) : id(id),title(title),price(price)
    {

    }
    virtual void addItem()
    {
        cout << "\nEnter Product id : ";
        cin >> this->id;
        cout << "Enter Product title : ";
        cin.ignore();
        getline(cin,this->title);
        cout << "Enter Product price : ";
        cin >> this->price;
    }
    virtual double calDiscount()=0;
    double totalofItem()
    {
        return this->price - calDiscount();
    }
};

class Book : public Products
{
private:
    string author;

public:
Book()
{

}
Book(int id,string title,double price,string author) : Products(id,title,price)
    {

    }
    void addItem()
    {
        Products :: addItem();
        cout<<"Enter Book Author :";
        cin>>this->author;

    }
    double calDiscount()
    {
        return 0.10*this->price;
    }
};

class Tape : public Products
{
private:
    string artist;
public:
    Tape()
    {

    }
    Tape(int id,string title,double price,string artist) : Products(id,title,price)
    {

    }
    void addItem()
    {
        Products :: addItem();
        cout<<"Enter Tape Artist :";
        cin.ignore();
        getline(cin,this->artist);
    }
    
    double calDiscount()
    {
        return this->price*0.05;
    }
};
enum Emenu
{
    EXIT,
    ADD_BOOK,
    ADD_TAPE,
    TOTAL
}; 
Emenu menu()
{
    int choice;
    cout<<"-------------------------";
    cout << "\n0.EXIT";
    cout << "\n1.ADD BOOK";
    cout << "\n2.ADD TAPE";
    cout << "\n3.TOTAL";
    cout<<"\nEnter your choice = ";
    cin>>choice;
    cout<<"-------------------------";
    return Emenu(choice);
}

int main()
{
    Emenu choice;
    Products *arr[3];
    int index=0;
    double totAmount;
    while((choice = menu())!=0)
    {
        switch(choice)
        {
            case ADD_BOOK:
                if(index<3)
                {
                    arr[index] = new Book();
                    arr[index]-> addItem();
                    arr[index]-> calDiscount();
                    arr[index]-> totalofItem();
                    index++; 
                }
                else
                {
                    cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-";        
                    cout<<"\nCart is full..."<<endl; 
                    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-"<<endl;   
                }                  
                break;
            case ADD_TAPE:    
                if(index<3)
                {
                    arr[index] = new Tape();
                    arr[index]-> addItem();
                    arr[index]-> calDiscount();
                    arr[index]-> totalofItem();
                    index++;  
                }
                else
                {
                    cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-";
                    cout<<"\nCart is full..."<<endl;  
                    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-"<<endl; 
                }       
                break;
            case TOTAL:
                totAmount=0.0;
                for(int i=0;i<index;i++)
                {
                    totAmount += arr[i]->totalofItem();
                }
                cout<<"\n==============================="<<endl;
                cout<<"TOTAL AMOUNT TO PAY = "<<totAmount<<endl;
                cout<<"==============================="<<endl;
                break;
            default:
                cout<<"Wrong choice."<<endl;
                break;
        }
    }
    for (int i = 0; i < index; i++)
    {
        delete arr[i];
    }
    cout<<"\n************************************";
    cout<<"\nThank you for using our app."<<endl;
    cout<<"************************************"<<endl;
    return 0;
}
