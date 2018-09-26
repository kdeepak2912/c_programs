#include<stdio.h>
#include<conio.h>
void diplay();
void main(){
    static int n;
    printf("%d",n);
    n=8;
    display(n);
}
void display(){
    int n;
    printf("\n%d",n);
}
