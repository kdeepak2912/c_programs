#include<stdio.h>
#include<conio.h>
void main(){
    union book{
        int price;
        char title[25];
    };
    union book b1={250,"Let us C"};
    printf("%s",b1.title);
    getch();
}
