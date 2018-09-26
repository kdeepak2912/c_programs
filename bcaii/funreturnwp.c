#include<stdio.h>
#include<conio.h>
int fun(int);
void main(){
    int num=20,res;
    res=fun(num);
    printf("result is %d",res);
    getch();
}

int fun(int a){
    return (a*a);
}


