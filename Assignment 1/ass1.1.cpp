#include <stdio.h>

struct Date

{
    int day;
    int month;
    int year; /* data */
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
}
void printDateOnConsole(struct Date *ptrDate)
{
    printf("%02d\n,%02d\n,%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter Day(1-31)");
    scanf("%d/n", &(ptrDate->day));
    printf("Enter Month(1-12)");
    scanf("%d/n", &(ptrDate->month));
    printf("enter year e.g(2023)");
    scanf("%d/n", &(ptrDate->year));
}
int main()
{
    struct Date myDate;

    int choice;

    initDate(&myDate);
    do
    {
        printf("The Menu Driven \n");
        printf("1.Intialize Date:\n");
        printf("2.Print Date:\n");
        printf("3.Accept Date:\n");
        printf("4.Quit \n");
        printf("Enter Choice (1-4)");
        scanf("%d/n", &choice);

        switch (choice)
        {
        case 1:
            initDate(&myDate);
            printf("Date initialized/n");
            break;
        case 2:
            printDateOnConsole(&myDate);
            printf("Date printed/n");

        case 3:
            acceptDateFromConsole(&myDate);
            printf("accept date/n");

        case 4:
            printf("good Bye/n");

        default:
            printf("Invalid Choice number..try again");
            break;
        }
        /* code */
    } while (choice != 4);

    return 0;
}