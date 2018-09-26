/*WAP to show the working of sizeof() operator by printing memory requirement by various data types.
date created 11-02-2018 @13:35
*/
#include<stdio.h>
#include<conio.h>
void main(){
    printf("int:%d byte\n",sizeof(int));
    printf("char:%d byte\n",sizeof(char));
    printf("double:%d byte\n",sizeof(double));
    printf("unsigned int:%d byte\n",sizeof(unsigned int));
    printf("long int:%d byte\n",sizeof(long int));
    printf("float:%d byte\n",sizeof(float));
    getch();
}
