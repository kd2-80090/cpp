

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
    SAVING = 1,
    CURRENT = 2,
    DMAT = 3
};

class insufficient_funds
{
private:
    int accid;
    double cur_balance;
    double withdraw_amount;
public:
    insufficient_funds(int accid, double cur_balance, double withdraw_amount)
    {
        this->accid = accid;
        this->cur_balance = cur_balance;
        this->withdraw_amount = withdraw_amount;
    }
    void display()
    {
        cout << "\n############## Insufficient funds ##############" << endl;
        cout << "You have insufficient balance in your account" << endl;
        cout << "Account id : " << this->accid<< endl;
        cout << " Current balance : " << this->cur_balance << " is less than withdrawl amount : " << this->withdraw_amount << endl;
    }
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
        this->id = 0;
        this->balance = 0;
    }
    Account(int id, account_type type)
    {
        this->id = id;
        this->type = type;
    }
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return this->id;
    }
    account_type getType()
    {
        return this->type;
    }
    double getBalance()
    {
        return this->balance;
    }
    void accept()
    {
        int ac_type;
        cout << "\nEnter bank account details";
        cout << "\nEnter account id : ";
        cin >> id;
        cout << "\nEnter account balance : ";
        cin >> balance;
        cout << "\n\t1.SAVING \t2.CURRENT \t3.DMAT \n Choose account type : ";
        cin >> ac_type;
        this->type = (account_type)ac_type;
    }
    void display()
    {
        cout << "\n*****************************\n BANK ACCOUNT DETAILS \n*****************************\n";
        cout << "Account id is : ";
        cout << this->id;
        cout << "\nAccount balance is : ";
        cout << this->balance;
        cout << "\nAccount type :";
        switch (account_type(this->type))
        {
        case SAVING:
            cout << "SAVING" << endl;
            break;
        case CURRENT:
            cout << "CURRENT" << endl;
            break;
        case DMAT:
            cout << "DMAT" << endl;
            break;
        };
    }
    void deposit(double depositAmount)
    {
        this->balance = this->balance + depositAmount;
        cout<<"Amount deposited successfully...:)"<<endl;
    }
    void withdraw(double withdrawAmount)
    {
        if (withdrawAmount > this->balance)
            throw insufficient_funds(id, balance, withdrawAmount);

        this->balance = this->balance - withdrawAmount;
        cout<<"Amount withdrawn successfully...:)"<<endl;
    }
};

enum Emenu
{
    OPEN_ACCOUNT=1,
    DEPOSIT,
    WITHDRAW,
    DISPLAY_ACCT_DETAILS,
    EXIT
};

Emenu menu()
{
    int choice;
    cout << "***********************" << endl;
    cout << "Press 1 - TO OPEN AN ACCOUNT" << endl;
    cout << "Press 2 - DEPOSIT CASH" << endl;
    cout << "Press 3 - WITHDRAW CASH" << endl;
    cout << "Press 4 - DISPLAY ACCOUNT DETAILS" << endl;
    cout << "Press 5 - EXIT" << endl;
    cout << "ENTER YOUR CHOICE = ";
    cin >> choice;
    cout << "***********************" << endl;
    return Emenu(choice);
}
int main()
{
    Account *arr[10];
    Emenu choice;
    int index = 0;
    double depositAmount;
    double withdrawAmount;
    while ((choice = menu()) != 5)
    {
        switch (choice)
        {
        case Emenu::OPEN_ACCOUNT:
            {
                arr[index] = new Account();
                arr[index]->accept();
                index++;
            }
            break;
        case Emenu::DEPOSIT:
            {
                cout << "Enter amount to deposit : ";
                cin >> depositAmount;
                arr[index - 1]->deposit(depositAmount);
                arr[index - 1]->display();
            }
            break;
        case Emenu::WITHDRAW:
            {
                cout << "Enter amount to withdraw : ";
                cin >> withdrawAmount;
                try
                {
                    arr[index - 1]->withdraw(withdrawAmount);
                }
                catch (insufficient_funds ins_funds)
                {
                    ins_funds.display();
                }
            }
            break;
        case Emenu::DISPLAY_ACCT_DETAILS:
            arr[index - 1]->display();
            break;
        default:
            cout << "Wrong Choice.. :(" << endl;
            break;
        }
    }
    cout << "Thank you for using our application... :)" << endl;
    return 0;
}
