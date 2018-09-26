#include<stdio.h>
#include<conio.h>
void toupper(char s[]){
    int i=0;
    while(s[i]!='\0')    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
        i++;
    }
    printf("string in UPPERCASE \n");
    puts(s);
}
void main(){
    int str[25];
    printf("Enter a string\n");
    gets(str);
    toupper(str);
    //puts(str);
    getch();
}
