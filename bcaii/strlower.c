#include<stdio.h>
#include<conio.h>
void toupper(char s[]){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
        i++;
    }
    printf("string in lowercase \n");
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

