#include<stdio.h>
#include<conio.h>
void main(){
    int str[25];
    printf("Enter a string\n");
    gets(str);
    strlength(str);
    getch();
}
void strlength(char str[]){
    int i=0;
    while(str[i]!='\0')
        i++;
    printf("Length of the string is %d.",i);
}
