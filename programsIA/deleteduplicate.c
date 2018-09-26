#include<conio.h>
#include<stdio.h>
void main()
{
    int n=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    int num[n],numn[n];
    int i,j,count=0;

    printf("Enter the elements of the array \n");

    for(i=0;i<n;++i)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }

    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(num[i]==num[j+1])
            {
                num[n]=num[i];
            }
        }
    }

    getch();

}
