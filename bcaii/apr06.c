/*6.	6- WAP to check if the entered number is prime or not.*/
#include<stdio.h>
#include<conio.h>
prime(int n,int f){
    if(f==1)
        return 1;
    else if(n%f==0)
        return 0;
    else
        return prime(n,f-1);
}
void main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(prime(n,n/2))
        printf("Prime number");
    else
        printf("Not Prime number");
    getch();
    }
