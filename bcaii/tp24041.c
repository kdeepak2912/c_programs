#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char *msg;
    //clrscr();
    msg=(char *)malloc(15*sizeof(char));
    strcpy(msg,"I am  a student");
    printf("Message is \n%s\n\n",msg);
    msg=(char *)realloc(msg,50*sizeof(char));
    strcpy(msg,"I am a student at Invertis University Bareilly");
    printf("New message is \n%s",msg);
    free(msg);
    getch();
}
