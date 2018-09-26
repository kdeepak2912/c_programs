/*WAP to generate GCD between two integers.*/
#include<stdio.h>
#include<conio.h>
GCD(int a,int aa){
    if(aa==0)
        return a;
    else
        return GCD(aa,a%aa);
    }
void main(){
    int a,aa;printf("Enter 2 num\n");
    scanf("%d%d",&a,&aa);
    printf("GCD of %d and %d is %d",a,aa,GCD(a,aa));
    getch();
    }
