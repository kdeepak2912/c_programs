#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   printf("Enter a character\n");
   scanf("%c",&ch);
   if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
   {
    if((ch>='a')&&(ch<='z'))
        printf("alphabet is in lowercase.");
        else if((ch>='A')&&(ch<='Z'))
        printf("alphabet is in uppercase");
   }
      else
        printf("Entered character is not an alphabet.");
    getch();
}

