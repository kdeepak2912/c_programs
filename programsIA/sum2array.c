#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int num1[n];
    int num2[n];

    printf("Enter the elements of First array\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&num1[i]);
    }

    printf("Enter the elements of Second array\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&num2[i]);
    }

    int sum[n];

    for(i=0;i<n;i++)
    {
        sum[i]=num1[i]+num2[i];
    }

    printf("Sum of respective array elements is\n");
    for(i=0;i<n;++i)
    {
        printf("%d",sum[i]);
    }
    getch();
}
