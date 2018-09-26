#include<stdio.h>
#include<conio.h>
void main(){
    typedef struct emp{
    int eid;
    char ename[15];
    }e;//now e has been declared as the data type of the structure emp type
     e e1;
    printf("Enter the emp id and e name\n");
    scanf("%d%s",&e1.eid,&e1.ename);

   }
    /*deca a=10,b=20;
    printf("%d\t%d",a,b);
    getch();
}*/
