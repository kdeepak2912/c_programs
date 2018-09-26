#include <stdio.h>
#include<conio.h>
void main()
{
    int unit;
    float amt;

    printf("Enter total units consumed: ");//reading number of units consumed by the user
    scanf("%d", &unit);

    if(unit <= 50)// Calculate electricity bill according to given conditions
        amt = unit * 0.50;
    else if(unit <= 150)
        amt = 25 + ((unit-50) * 0.75);
    else if(unit <= 250)
        amt = 100 + ((unit-150) * 1.20);
    else
        amt = 220 + ((unit-250) * 1.50);

    printf("Electricity Bill = Rs. %.2f",amt);
    getch();
}
