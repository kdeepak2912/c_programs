#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char c[99];
    fp=fopen("E:\deepak.txt","r");
        fgets(c,54,fp);
        puts(c);
    fclose(fp);
    getch();
}
