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

    int min=num[0];

    for(i=0;i<n;++i)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }

    printf("Smallest number in the array is %d \n",min);
    getch();

}

