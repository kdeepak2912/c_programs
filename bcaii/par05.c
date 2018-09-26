/*5.	5- WAP to ask a number and power to be calculated for that number.*/
#include<stdio.h>
#include<conio.h>
long int power(int n,int p)
{
    if(p>1){
        return n*power(n,p-1);
        }
}
void main(){
    int n,p;
    printf("Enter the number and power\n");
    scanf("%d%d",&n,&p);
    printf("result is %ld",power(n,p));
    getch();
}
