#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   printf("Enter a character\n");
   scanf("%c",&ch);
   if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
   {
       if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
       printf("Character is vowel.");
       else
       printf("Character is consonant.");
   }
   else
    printf("Character is not alphabet.");
    getch();
}
