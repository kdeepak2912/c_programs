/*60) WAP to input an array from user of 10 elements.
date created 11-02-2018 @14:15*/
#include"stdio.h"
#include"conio.h"
void main(){
    int num[10];
    int i;
    printf("Enter 10 element\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("***********Array elements*********\n");
    for(i=0;i<10;i++){
        printf("%d\n",num[i]);

    }
    getch();
}
