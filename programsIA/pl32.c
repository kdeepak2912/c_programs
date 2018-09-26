#include<conio.h>
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a alphabet\n");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
        if(ch>='a'&&ch<='z')
            printf("Alphabet is Lowercase.");
        if(ch>='A'&&ch<='Z')
            printf("Alphabet is Uppercase.");
    }
    else
        printf("Character is not alphabet.");

    getch();
}
