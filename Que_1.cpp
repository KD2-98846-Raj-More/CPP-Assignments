/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/


#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate)
{
    ptrDate->day;
    ptrDate->month;
    ptrDate->year;

}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date = %d/%d/%d\n",ptrDate->day,ptrDate->month,ptrDate->year);

}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter day: ");
    scanf("%d", &ptrDate->day);

    printf("Enter month: ");
    scanf("%d", &ptrDate->month);

    printf("Enter year: ");
    scanf("%d", &ptrDate->year);
}

int main()
{
    struct Date date;
    int choice;

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Initialize Date\n");
        printf("2. Accept Date\n");
        printf("3. Print Date\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                initDate(&date);
                printf("Date initialized successfully.\n");
                break;

            case 2:
                acceptDateFromConsole(&date);
                break;

            case 3:
                printDateOnConsole(&date);
                break;

            case 0:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}