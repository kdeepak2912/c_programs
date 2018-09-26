/*27) Program to print the following pattern:
1
2 3
4 5 6
7 8 9 10
 date created 21-01-2018 @15:15
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,num=1;
    for(r=1;r<5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    getch();
}
