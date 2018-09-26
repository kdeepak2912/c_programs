#include<stdio.h>
#include<conio.h>
void main()
{
    int month;
    do
    {

        int year;
        printf("Enter year\n");
        scanf("%d",&year);
        printf("Enter month number\n");
        scanf("%d",&month);
        switch(month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days in the month");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
                printf("30 days in the month.");
                break;
        case 2:

            if(year%4==0)
                printf("29 days");
                else
                    printf("28 days");
        break;

        default:
            printf("Invalid Choice!");
        }
        }while((month<1)||(month>12));
}
