/*75) WAP to create a header file and including it. [Hint- add(), sub(), mul(), div() with calc.h]*/
#include<stdio.h>
#include<conio.h>
#include<calc.h>
void main(){
    float n1,n2;
    printf("Enter two num\n");
    scanf("%f%f",&n1,&n2);
    add(n1,n2);
    getch();
}
