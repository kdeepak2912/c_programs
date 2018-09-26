#include<conio.h>
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a alphabet\n");
    scanf("%c",&ch);
    if(ch<'a'||ch>'z')
        printf("Character is not alphabet.");
        else
        {
            switch(ch)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Alphabet is vowel.");
                break;
                default:
                    printf("Alphabet is consonant.");
            }
        }
        getch();
}

