#include<stdio.h>
#include<conio.h>
void main(){
    struct book{
    char name[25];
    char author[25];
    int callno;
    };
    struct book b1={"Let Us C","YPK",98712};
    struct book *ptr;
    ptr =&b1;
    printf("%u",ptr);
    printf("\n%s\n%s\n%d",ptr->name,ptr->author,ptr->callno);;
    getch();
}
