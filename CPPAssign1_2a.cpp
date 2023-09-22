/*
Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/


#include<iostream>
struct Date
{
    int dd;
    int mm;
    int yy;
};

void initDate(struct Date* ptrDate)
{   
    ptrDate->dd=00;
    ptrDate->mm=00;
    ptrDate->yy=00;
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter a day:");
    scanf("%d",&ptrDate->dd);
    printf("Enter month:");
    scanf("%d",&ptrDate->mm);
    printf("Enter year:");
    scanf("%d",&ptrDate->yy);
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date is %d/%d/%d\n",ptrDate->dd,ptrDate->mm,ptrDate->yy);
}

bool isLeapYear(struct Date* ptrDate)
{   
    if((ptrDate->yy%4==0 && ptrDate->yy%100!=0)||(ptrDate->yy%4==0 && ptrDate->yy%400==0))
        return true; 
    else
        return false;
}
int main()
{
    int sc;
    struct Date d1;
    bool isLeap;
    do
    {
        printf("1.Print Default Date\n2.Print Date\n3.Accept Date\n4.See if Leap year\n0.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&sc);
        switch(sc)
        {
            case 1:
                    initDate(&d1);
                    printDateOnConsole(&d1);
                    break;
            case 2:
                    printDateOnConsole(&d1);
                    break;
            case 3:
                    acceptDateFromConsole(&d1);
                    break;
            case 4:
                    if(isLeapYear(&d1))
                        printf("Yes, It is a Leap year\n");
                    else
                        printf("No, Not a leap year\n");
        }
    } while (sc!=0);
    return 0;    
}
