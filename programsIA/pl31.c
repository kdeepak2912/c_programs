#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   printf("Enter a character\n");
   scanf("%c",&ch);
   if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
      printf("Entered character is alphabet.");
    else if(ch>='0'&&ch<='9')
        printf("Character is digit.");
    else
        printf("Character is special character.");
    getch();
}


