#include<stdio.h>
#include<conio.h>
void main(){
    struct book{
        int price;
        char title[25];
    };
    union mag{
        int price;
        char title[25];
    };
    struct book b={250,"Let us C"};
    union mag m={250,"Digit"};
    printf("Size of structure is %d\nSize of union is %d",sizeof(b),sizeof(m));
    getch();
}
