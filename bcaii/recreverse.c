#include<stdio.h>#include<conio.h>
rev(int n){static int r;if(n){r=r*10+n%10;rev(n/10);}return r;}
void main(){int num;printf("Enter a num\n"); scanf("%d",&num);printf("Reverse of %d is %d.",num,rev(num));getch();}
