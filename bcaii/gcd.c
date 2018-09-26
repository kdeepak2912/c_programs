#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("Enter two num\n");
    scanf("%d%d",&a,&b);
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    int t;
    while(a%b!=0){
        t=a%b;
        b=a;
        a=t;
    }
    printf("GCD of numbers is %d.",b);
    getch();
}
