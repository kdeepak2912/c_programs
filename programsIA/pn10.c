#include<stdio.h>
#include<conio.h>
void main()
{
    int amount,note500=0,note200=0,note100=0,note50=0,note20=0,note10=0,note5=0,note2=0,note1=0;
    printf("Enter the amount\n");
    scanf("%d",&amount);
    if(amount>=500)
    {
        note500=amount/500;
        amount=amount-note500*500;
    }
    if(amount>=200)
    {
        note200=amount/200;
        amount=amount-note200*200;
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount=amount-note100*100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount=amount-note50*50;
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount=amount-note20*20;
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount=amount-note10*10;
    }
    if(amount>=5)
    {
        note5=amount/5;
        amount=amount-note5*5;
    }
    if(amount>=2)
    {
        note2=amount/2;
        amount=amount-note2*2;
    }
    if(amount>=1)
    {
        note1=amount/1;
        amount=amount-note1*1;
    }

    printf("\nNumber of 500 notes is \t %d",note500);
    printf("\nNumber of 200 notes is \t %d",note200);
    printf("\nNumber of 100 notes is \t %d",note100);
    printf("\nNumber of 50 notes is \t %d",note50);
    printf("\nNumber of 20 notes is \t %d",note20);
    printf("\nNumber of 10 notes is \t %d",note10);
    printf("\nNumber of 5 notes is \t %d",note5);
    printf("\nNumber of 2 notes is \t %d",note2);
    printf("\nNumber of 1 notes is \t %d",note1);

    getch();
}
