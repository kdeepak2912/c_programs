#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char c[99];
    fp=fopen("E:\earthlings.txt","w");
    printf("Enter a string\n");
    gets(c);
    fputs(c,fp);
    fclose(fp);
    getch();
}

