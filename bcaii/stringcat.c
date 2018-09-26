#include<stdio.h>
#include<conio.h>
void main(){
    char s1[25];
    char s2[25];
    printf("Enter two strings\n");
    gets(s1);
    gets(s2);
    concat(s1,s2);
    getch();
}
void concat(char s1[], char s2[]){
    int i=0,j=0;
    while(s1[i]!='\0')
        i++;
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;j++;
    }
    s1[i]='\0';
    printf("Concatenation of the strings is\n");
    puts(s1);
}
