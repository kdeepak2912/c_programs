/*WAP to calculate discounted amount as
per the criteria if total Amount>5000
 give discount of 40% otherwise 10%.
 date created 11-02-2018 @14:05*/
 #include"stdio.h"
 #include"conio.h"
 void main()
 {
     float amt;
     printf("Enter amount \n");
     scanf("%f",&amt);
     if(amt>5000)
        amt*=0.4;
     else
        amt*=0.1;
     printf("Discounted amount is  %.2f",amt);
 }
