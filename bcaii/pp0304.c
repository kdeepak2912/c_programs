#include<stdio.h>
#include<conio.h>
void main(){
    struct emp{
    char ename[10];
    int eid;
    };
    int n,i;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    struct emp e[n];
    //read emp detail
    for(i=0;i<n;i++){
        printf("Enter name and id of %d employee\n",i+1);
        scanf("%s%d",&e[i].ename,&e[i].eid);
    }
    //display employee detail
    for(i=0;i<n;i++)
        printf("\nEmp name %s emp id %d",e[i].ename,e[i].eid);
    getch();
}
