/*c common errors testing on 15-01-2018 @14:06
author @deepak
date last modified 15-01-2018

*/

#include<stdio.h>// I/O header file inclusion
#include<conio.h>
void main()     //main function
{
    int control=0;
    do{
    int num,numf;    //variable declaration
    printf("enter a number\n");
    scanf("%d",&num);//reading a number from user of integer datatype
    printf("you have entered %d",num);//diplaying the number entered by the user
    if(num>32767)
        numf=num-65536;
    printf("\nvalue after general formula %d",numf);
    printf("\nenter 1 to continue 0 to exit\n");
    scanf("%d",&control);
    }while(control==1);
}
