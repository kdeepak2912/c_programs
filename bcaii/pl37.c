/*Write a program to print all prime numbers between 1 to 300 using nested loop, break and *********continue******.
date created @10-02-2018 @19:30*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int num,i,n=300; // num=prime numbers,n=total no. of prime numbers

  for(num=1;num<=300;num++)
  {
        i=2;
        while(i<n-1)
        {
             if(num%i==0)
                   break;
                i++;
        }
        if(i==num)
             printf("\n%d  ",num);
    }
    getch();
}
