#include<conio.h>
#include<stdio.h>
void main()
{
    int n=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    int num[n];
    int i,sum=0,j,temp;

    printf("Enter the elements of the array \n");

    for(i=0;i<n;++i)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }

    printf("Sum of numbers is %d and average of numbers is  %d  ",sum,sum/n);

    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(num[j]<num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }

    printf("\nArray elements in descending order are\n");
    for(i=0;i<n;++i)
    {
        printf("\n%d",num[i]);
    }

    getch();

}
