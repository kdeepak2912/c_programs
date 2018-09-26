#include<stdio.h>
#include<conio.h>
void main(){
    char s1[25];
    char s2[25];
    printf("Enter two strings\n");
    gets(s1);
    gets(s2);
    scmp(s1,s2);
    getch();
}
void scmp(char s1[], char s2[]){
    int i=0,res=0;
    while(s1[i]!='\0'||s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            res=s1[i]-s2[i];
            break;
            }
            i++;
    }
    if(res){
        if(res>0)
            printf("first string is greater \t %d",res);
        else
            printf("second string is greater \t %d",res);
        }
        else
            printf("Strings are equal\t%d",res);
}
