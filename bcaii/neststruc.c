#include<stdio.h>
#include<conio.h>
void main(){
    struct lib{
        int acc;
        struct book{
            int price;
            char title[25];
        }b;
    }l;
    puts("Enter cost and title of book");
    scanf("%d%s",&l.b.price,l.b.title);
    printf("Cost of the book is %d\ntitle of the book is %s",l.b.price,l.b.title);
    getch();
}
