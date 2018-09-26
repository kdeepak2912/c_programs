#include<stdio.h>
#include<conio.h>
void main(){
    char s1[10]="hello";
    char s2[10]="heoll";
    int diff=strcmp(s1,s2);
    printf("Difference between the strings is %d",diff);
    getch();
}
