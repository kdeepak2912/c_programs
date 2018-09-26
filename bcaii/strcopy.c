#include<stdio.h>
#include<conio.h>
void main(){
    char s1[25];
    char s2[25];
    printf("Enter two strings\n");
    gets(s1);
    gets(s2);
    copy(s1,s2);
    getch();
}
void copy(char a[], char b[]){
    int i=0;
    while(b[i]!='\0'){
        a[i]=b[i];
        i++;
    }
    a[i]='\0';
    printf("%s",a);
}
