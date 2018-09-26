#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   printf("Enter a weekday number\n");
   scanf("%c",&ch);
   if(ch>'0'&&ch<'8')
   {
           if(ch=='1')
                printf("MONDAY");
          if(ch=='2')
                printf("TUESDAY");
          if(ch=='3')
                printf("WEDNESDAY");
          if(ch=='4')
                printf("THURSDAY");
          if(ch=='5')
                printf("FRIDAY");
          if(ch=='6')
                printf("SATDAY");
          if(ch=='7')
                printf("SUNDAY");
   }
   else
    printf("Weekday number out of range.");
    getch();
}


