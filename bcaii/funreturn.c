#include<stdio.h>
#include<conio.h>
int greet();
void main(){
    int res;
    res=greet();
    printf("welcome to %dth program",res);
    getch();
}

int greet(){
    return (55);
}


