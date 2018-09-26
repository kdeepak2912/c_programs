#include<stdio.h>
#include<conio.h>
void main()
{
    float phy,chem,bio,math,comp,per;

    printf("Enter the marks of Physics\n");
    scanf("%f",&phy);
    printf("Enter the marks of Chemistry\n");
    scanf("%f",&chem);
    printf("Enter the marks of Biology\n");
    scanf("%f",&bio);
    printf("Enter the marks of Mathematics\n");
    scanf("%f",&math);
    printf("Enter the marks of Computer\n");
    scanf("%f",&comp);

    per=(phy+chem+bio+math+comp)/5.0;


    if(per>=90)
        printf("Your grade is  **A**");
    else if(per>=80)
        printf("Your grade is  **B**");
    else if(per>=70)
        printf("Your grade is  **C**");
    else if(per>=60)
        printf("Your grade is  **D**");
    else if(per>=40)
        printf("Your grade is  **E**");
    else if(per<40)
        printf("Your grade is  **F**");

    getch();
}

