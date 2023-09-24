
/*
Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
*/


#include<stdio.h>
struct Date
{
    int day;
    int mon;
    int yr;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day=00;
    ptrDate->mon=00;
    ptrDate->yr =00;
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter day :");
    scanf("%d",&ptrDate->day);
    printf("Enter month :");
    scanf("%d",&ptrDate->mon);
    printf("Enter year :");
    scanf("%d",&ptrDate->yr);
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date is %d/%d/%d \n",ptrDate->day,ptrDate->mon,ptrDate->yr);
}

int main()
{
    int choice;
    struct Date d1;
    do{
        
        printf("1.Default Date\n2.Print Date\n3.Accept Date\n0.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
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
        }
    }while(choice!=0);
    return 0;
}