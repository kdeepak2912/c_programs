#include<stdio.h>
#include<conio.h>
void main(){
    struct emp{
        int eid;
        char name[25];
    }e[5];
    int i;
    printf("Enter details of the employees\n id followed by name\n ");
    for(i=0;i<5;i++){
        scanf("%d%s",&e[i].eid,&e[i].name);
    }
    getch();}
