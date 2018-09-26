#include<conio.h>
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a alphabet\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("Alphabet is vowel");
    else
        printf("Alphabet is not a vowel");
    getch();
}
