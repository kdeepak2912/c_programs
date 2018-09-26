/*PROGRAM TO FIND STORAGE SIZE OF DIFFERENT DATATYPES
date created 19-01-2018 @14:16
author adal axal
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("int:%d\n",sizeof(int));
    printf("char:%d\n",sizeof(char));
    printf("double:%d\n",sizeof(double));
    printf("unsigned int:%d\n",sizeof(unsigned int));
    printf("long int:%d\n",sizeof(long int));
    printf("float:%d\n",sizeof(float));
    //check precendence of unary increment operator
    int i=10;
    printf("%d\n%d",i++,++i);


    getch();
}
