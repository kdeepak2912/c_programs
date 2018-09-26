#include<stdio.h>
#include<conio.h>
void main(){
    char name[20];
    printf("Enter your name\n");
    gets(name);//scanf("%[^\n]s",&name);
    puts("Your name is");
    puts(name);
    getch();
}
