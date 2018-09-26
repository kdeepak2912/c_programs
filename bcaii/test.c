#include<conio.h>
#include<stdio.h>
void main(){
    struct book{
    int b;
    char title[25];
    }b;
     union mag{
    int b;
    char title[25];
    }m;
    printf("size of struct and union is \n%d \n%d",sizeof(b),sizeof(m));
    getch();
}
