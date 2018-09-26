/*59) Write a program to initialize an array of 10 elements.
date created 11-02-2018 @14:10*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    printf("***********Array elements*********\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",num[i]);

    }
    getch();
}
