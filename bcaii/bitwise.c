#include<stdio.h>
#include<conio.h>
void main(){
    int A=-10,B=20;
    int c,d,e,f;
    c=A&B;
    d=A|B;
    e=~A;
    f=A^B;
    printf("A&B=%d\nA|B=%d\n ~a=%d\nA^B=%d",c,d,e,f);
    getch();

}
