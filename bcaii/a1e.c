/*A cashier has currency notes of 10, 50 and 100. If amount to be withdrawn is input through keyboard in hundreds,
 find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
 date created @31-01-18 @14:56
 */
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     int amt;
     printf("Enter the amount \n");
     scanf("%d",&amt);
    if((amt%10)==0){
    printf("Number of 100 Rs notes:\t%d\n",amt/100);
    amt=amt%100;
    printf("Number of 50 Rs notes:\t%d\n",amt/50);
    amt=amt%50;
    if(amt>=10)
    printf("Number of 10 Rs notes:\t%d\n",amt );
    }
    else
        printf("amount is not in multiple in of 10");
     getch();
 }
