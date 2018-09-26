#include<conio.h>
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a alphabet to check if it is vowel\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        {
            switch(ch)
                {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                     printf("Alphabet is vowel.");
                     break;
                default:
                    printf("Alphabet is consonant.");
                }
        }
    else
     printf("Character is not alphabet.");
    getch();
}
