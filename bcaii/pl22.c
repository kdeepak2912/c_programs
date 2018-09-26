/* C 22) Program to print the name of the day according to user input using SWITCH.
E.g. if user inputs 1 Sunday ,or for 2 Monday should  be displayed.
date created @20-01-2018 19:36
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int wd;
    printf("enter a week day number\n");
    scanf("%d",&wd);
    switch(wd){
        case 1:
            printf("SUNDAY");
            break;
        case 2:
            printf("MONDAY");
            break;
        case 3:
            printf("TUESDAY");
            break;
        case 4:
            printf("WEDNESDAY");
            break;
        case 5:
            printf("THURSDAY");
            break;
        case 6:
            printf("FRIDAY");
            break;
        case 7:
            printf("SATURDAY");
            break;
        default:
            printf("Not A Vowel!!");
    }
    getch();
}
