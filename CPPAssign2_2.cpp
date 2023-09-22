
/*
Q2. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
Instead of char[] use string datatype
*/

#include<iostream>
using namespace std;
class Address
{
    private:
             string building;
             string street;
             string city;
             int pincode;
    public:
            void acceptAddress()        //FACILITATOR
            {
                cout<<"Enter address details:\n1.Building\n2.Street\n3.City\n4.Pincode\n";
                getline(cin,building);
                getline(cin,street);
                getline(cin,city);
                cin>>pincode;
            }
            void displayAddress()       //FACILITATOR
            {
                cout<<"\n********************\nAddress details:\n"<<"1.Building: "<<building<<"\n2.Street: "<<street<<"\n3.City: "<<city<<"\n4.Pincode: "<<pincode<<"\n********************"<<endl;
            }
            Address()           //Constructor
            {
                //cout<<"in default/parameterless constructor";
            }
            Address(string building,string street,string city,int pincode) : building(building),street(street),city(city),pincode(pincode)
            {
                //cout<<"in parameterized constructor";
            }
            string setBuilding(string building)     //MUTATOR/SETTER FOR PIN
            {
                return this->building=building;
            }
            string setStreet(string street)
            {
                return this->street=street;
            }
            string setCity(string city)
            {
                return this->city=city;
            }
        
            int setPincode(int pincode)
            {
                return this->pincode=pincode;
            }
            string getBuilding(string building)     //INSPECTOR FOR BUILDING
            {
                return this->building;
            }
            string getStreet(string street)
            {
                return this->street;
            }
            string getCity(string city)
            {
                return this->city;
            }
            int getPincode(int pincode)
            {
                return this->pincode;
            }
};
int main()
{
    Address ad;
    Address ad2("102","Pipeline","Ahmednagar",414001);
    ad2.displayAddress();
    ad.acceptAddress();
    ad.displayAddress();
    ad.setBuilding("502");
    ad.setStreet("Savedi");
    ad.setCity("Pune");
    ad.setPincode(411033);
    ad.displayAddress();
    cout<<"\nBuilding is "<<ad.getBuilding("502");
    cout<<"\nStreet is "<<ad.getStreet("Savedi");
    cout<<"\nCity is "<<ad.getCity("Pune");
    cout<<"\nPincode is "<<ad.getPincode(411033);
    return 0;
}