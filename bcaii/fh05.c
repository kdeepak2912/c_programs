#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char again;
    struct emp{
        int id;
        char name[25];
    }e;
    fp=fopen("E:\emp.txt","w");
    /*if(fp==NULL){
        printf("File not found!!");
        exit(0);
    }
    do{
        printf("\n enter eid & name\n");
        scanf("%d%s",&e.id,e.name);
        fprintf(fp,"%d\t%s\n",e.id,e.name);
        printf("Enter y to enter again\n");
        scanf(" %c",again);
    }while(again=='y'||again=='Y');
    fclose(fp);*/
    while(fscanf(fp,"%s",e.name)!=EOF){
        printf("%s\n",e.name);
    }
    getch();
}
