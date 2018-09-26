/*Write a program to show the working of getchar() and putchar() function.
date created 11-02-2018 @13:30*/
#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("enter a character\n");
    ch=getchar();
    printf("You have entered this character\n");
    putchar(ch);
    getch();
}
