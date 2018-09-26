/*program to find reverse of an integer using recursion*/
#include<stdio.h>
#include<conio.h>
int sum=0,rem;
rev(int n){
    if(n){
        rem=n%10;
        sum=sum*10+rem;
        rev(n/10);
    }
    return sum;
}
void main(){
    int num;
    printf("Enter a integer to find reverse of a number using recursion\n");
    scanf("%d",&num);
    printf("Reverse of %d using recursion is %d",num,rev(num));
    getch();
}
