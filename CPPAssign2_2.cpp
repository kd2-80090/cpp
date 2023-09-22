
/*
Q2. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
Instead of char[] use string datatype
*/

#include<iostream>
using namespace std;
class Address
{
    private:
             string home;
             string city;
             int pincode;
    public:
            void acceptAddress()
            {
                cout<<"Enter address details:\n1.Home\n2.City\n3.Pincode\n";
                getline(cin,home);
                getline(cin,city);
            }
            void displayAddress()
            {
                cout<<"\nAddress details:\n"<<"1.Home: "<<home<<"\n2.City:"<<city<<"\n3.Pincode: "<<pincode;
            }
            Address()
            {
                //cout<<"in default/parameterless constructor";
            }
            Address(string home,string city) : home(home),city(city)
            {
                //cout<<"in parameterized constructor";
            }
            string setCity(string city)
            {
                return this->city=city;
            }
            string getCity(string city)
            {
                return this->city;
            }
};
int main()
{
    Address ad;
    Address("default","Ahmednagar");
    ad.displayAddress();
    ad.acceptAddress();
    ad.displayAddress();
    ad.setCity("Pune");
    ad.displayAddress();
    cout<<"City is "<<ad.getCity("Pune");

}