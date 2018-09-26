/*73) WAP to create a function with return and without parameters.
date created 11.02.2018 @18:55 */
#include"stdio.h"
#include"conio.h"
int read();
void main()
{
    printf("User has entered %d",read());
    getch();
}
int read()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    return n;
}
