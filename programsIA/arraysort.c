#include<stdio.h>
#include<conio.h>
void main()
{
    const int FACTOR=-18;
    const float ERROR=0.0001;
    const char BEGIN='{';
    const char END='}';
    const char NMAE[6]={'S','h','a','r','o','n'};
    const char EOLN='\n';
    const char COST[6]={'$','1','9','.','9','5'};
    int num[5]={6,9,8,5,4};
    int i,j;
    for(i=0;i<5;++i)
    {
        for(j=0;j<5;++j)
        {
            if(num[i]>num[i+1])
            {
                int tem=num[i];
                num[i]=num[i+1];
                num[i+1]=tem;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",num[i]);
    }
}
