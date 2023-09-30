
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
private:
    int id;
    string title;
    
    char type;
    int index;
protected:
    double price;
    void setPrice(double price)
    {
        this->price = price;
    }
    void setIndex(int index)
    {
        this->index = index;
    }    
public:
    Products()
    {

    }
    Products(int id,string title,double price) : id(id),title(title),price(price)
    {

    }
    virtual void addItem()=0;
    virtual double total()=0;
};

class Book : public Products
{
private:
    string author;
    int count;
public:
Book()
{

}
Book(int id,string title,double price,string author) : Products(id.title,price)
    {

    }
    int addItem()
    {
        cout<<"If want to Add, then 1 else 0 :"
        cin>>count;
        count = this->setIndex();
        count++;
    }
    double total()
    {
        return setPrice(this->price - (this->price*0.10));
    }
};

class Tape : public Products
{
private:
    string artist;
    int count;
public:
    Tape()
    {

    }
    Tape(int id,string title,double price,string artist) : Products(id.title,price)
    {

    }
    void addItem()
    {
        cout<<"If want to Add, then 1 else 0 :"
        cin>>count;
        count = this->setIndex();
        count++;
    }

    double total()
    {
        return setPrice(this->price - (this->price*0.10));
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
    cout << "\n1.ADD_BOOK";
    cout << "\n2.ADD_TAPE";
    cout << "\n3.TOTAL";
    cin>>choice;
    cout<<"-------------------------";
    return Emenu(choice);
}

int main()
{
    Emenu choice;
    Products *arr[3];
    int index=0;
    
    while((choice = menu())!=0)
    {
        switch(choice)
        {
            case ADD_BOOK:
                if(index<3)
                {
                    arr[index] = new Book();
                    arr[index]-> addItem();
                    arr[index]-> total();
                    index++; 
                }
                else
                    cout<<"Cart is full..."<<endl;              
                break;
            case ADD_TAPE:    
                if(index<3)
                {
                    arr[index] = new Tape();
                    arr[index]-> addItem();
                    arr[index]-> total();
                    index++;  
                }
                else
                    cout<<"Cart is full..."<<endl;          
                break;
            case TOTAL:
                if(index<3)
                {
                    arr[index] -> total();
                    index++;
                }
                else
                    cout<<"Cart is full...";
            default:
                cout<<"Wrong choice."<<endl;
                break;
        }

    }
    cout<<"Thank you for using our app."<<endl;
}
