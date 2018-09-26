/* C 21) Program to check whether the character input by the user is a vowel or not using SWITCH statement.
 E.g. if input is 1 display no of days=31,2  display no. of days =28/29,etc
date created @20-01-2018 19:20
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char alpha;
    printf("enter a character\n");
    scanf(" %c",&alpha);
    switch(alpha){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel ");
        break;
        default:
            printf("Not A Vowel!!");
    }
    getch();
}
