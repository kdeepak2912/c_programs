#include<stdio.h>
#include<conio.h>
void main(){
    char x="New";
    char y="Dictionary";
    char *t;
    void swap(char *, char *);
    swap(&x,&y);//function call sending pointer addresses as values
    printf("\n\n%s-%s",x,y);
    t=x;
    x=y;
    y=t;
    printf("\n%s-%s",x,y);
    getch();
}
void swap(char *x, char *y){
    char *t;
    *y=*x;
    *x=*y;
    *y=*t;
printf("nowwwwwww\n");
    printf("\n%s-%s",x,y);
}
