/*61) WAP to add 1,2,3….(increasing order) to the array of 5 elements.
date created @11-02-2018 @14:16*/
#include"stdio.h"
#include"conio.h"
void main()
{
    int num[5];
    int i;
    for(i=0;i<5;i++)
    {
        num[i]=i+1;
    }
    printf("***********Array elements*********\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",num[i]);

    }
    getch();
}
