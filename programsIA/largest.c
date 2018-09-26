#include<conio.h>
#include<stdio.h>
void main()
{
    int n=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    int num[n];
    int i;

    printf("Enter the elements of the array \n");

    for(i=0;i<n;++i)
    {
        scanf("%d",&num[i]);
    }

    int max=num[0];

    for(i=0;i<n;++i)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }

    printf("Largest number in the array is %d \n",max);
    getch();

}

