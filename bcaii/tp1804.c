#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int *p,i=0;
    p=realloc(p,5);
    if(p==NULL){
            printf("Memory allocation unsuccessful!!");
        exit(0);
    }

    while(i<5){
        printf("\n%u",(p+i));
        i++;
    }

    getch();
}
