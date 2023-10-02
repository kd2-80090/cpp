


/*
Q2. Write a class to store Account information of Bank customer by using following class diagram.
Use enum to store information of account type. Create an array of 5 Accounts in main() and accept
their details from user. Write Menu driven program to deposit/withdraw amount from the account.
After each transaction display updated account balance. Provide appropriate getters/setters with
necessary validations. Throw exceptions for invalid values. Also implement an exception class
InsufficientFunds. In withdraw() member function, if sufficient balance is not available
in account, throw this exception.
*/


#include <iostream>
using namespace std;

enum account_type
{
    SAVING,
    CURRENT,
    DMAT
};
class Account
{
    private:
    int id;
    account_type type;
    double balance;
    public:
    Account()
    {

    }
    Account(id, account_type type)
    {

    }
    accept()
    {

    }
    display()
    {

    }
    void setId(int id)
    {
        this->id = id;
    }
    void setType(account_type type)
    {
        this->type=type;
    }
    int getId()
    {
        return this->id;
    }
    account_type type()
    {
        return type;
    }
    double getBalance()
    {
        return this->balance;
    }
    void deposit(double amount)
    {

    }
    void withdraw(double amount)
    {

    }
};

class insufficient_funds 
{
    private:
    int accid;
    double cur_balance;
    double withdraw_amount;
    insufficient_funds(int accid,double cur_balance,double withdraw_amount)
    {

    }
    display()
    {

    }
};

enum Emenu
{
    DEPOSIT,
    WITHDRAW,
    EXIT
}
int main()
{
    Account arr[5];

    return 0;
}


