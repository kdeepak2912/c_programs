/*74) WAP to create a function with return and with parameters.
date created 11-02-2018 @1900 */
#include"stdio.h"
#include"conio.h"
int add(int,int);
void main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("Sum of %d and %d is %d",n1,n2,add(n1,n2));
    getch();
}
int add(int n,int N)
{
    return (n+N);
}
