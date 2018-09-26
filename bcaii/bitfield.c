#include<stdio.h>
#include<conio.h>
void main(){
    struct date{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y;
    };
    printf("Size of structure is %d\n",sizeof(struct date));
    struct date d1={24,20,18};
    printf("You have entered %u\t%u\t%u",d1.d,d1.m,d1.y);
    getch();

}
