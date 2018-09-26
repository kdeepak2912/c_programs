#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Alphabets from 'a' to 'z' using for loop\n");
    for(ch='a';ch<='z';++ch)
        printf("%c\n",ch);
    getch();
}
