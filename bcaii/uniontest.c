#include<stdio.h>
#include<conio.h>
void main(){
    union emp{
    int id;
    char name;
    };
    union emp e1={12,'v'};
    printf("%d",e1.id);
    getch();
}
