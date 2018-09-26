#include<conio.h>
#include<stdio.h>

void main()
{
    int n=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    int num[n];
    int i,sum=0,j,temp,search,flag=0;


    printf("Enter the elements of the array \n");

    for(i=0;i<n;++i)
    {
        scanf("%d",&num[i]);
    }

    printf("Enter the number to be searched\n");
    scanf("%d",&search);

    for(i=0;i<n;++i)
    {
        if(search==num[i])
        {
            printf("Number is prsent!");
            ++flag;
            break;
        }
    }

    if(flag==0)
    {
        printf("Number is not present!");
    }

    getch();
}

