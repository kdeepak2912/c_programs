#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,temp,j;
    printf("Enter number of element(<100)");
    scanf("%d",&n);
    int num[n];
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(num[j]>num[j+1])
            {
                num[j]=num[j]+num[j+1];
                num[j+1]=num[j]-num[j+1];
                num[j]=num[j]-num[j+1];
            }
        }
    }

    printf("Array elements in sorted order are\n");

    for(i=0;i<n;i++)
        printf("%d\n",num[i]);

    getch();
}

