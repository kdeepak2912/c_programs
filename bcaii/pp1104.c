#include<stdio.h>
#include<conio.h>
void main(){
    int i=3;
    int *j;
    int **k;
    j=&i;
    k=&j;
    printf("&i\t    %u\n",&i);
    printf("j\t     %u\n",j);
    printf("*k\t    %u\n",*k);
    printf("&j\t    %u\n",&j);
    printf("k\t     %u\n",k);
    printf("&k\t    %u\n",&k);
    printf("i\t     %d\n",i);
    printf("*(&i)\t %d\n",*(&i));
    printf("*j\t    %d\n",*j);
    printf("**k\t   %d\n",**k);
    getch();
}
