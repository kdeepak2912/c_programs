#include<stdio.h>
#include<conio.h>
void main()
{
    float sp,cp;
    printf("Enter cost price and selling price\n");
    scanf("%f%f",&cp,&sp);
    if(sp==cp)
    {
        printf("There is no profit or loss\n");
    }
    else
    {
        if(sp>cp)
            printf("There is profit of\t%.2f",(sp-cp));
        if(cp>sp)
            printf("There is loss of \t%.2f",(cp-sp));
    }
    getch();
}

