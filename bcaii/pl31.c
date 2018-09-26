/*31) Program to find the sum of first N odd numbers.
 Value of N should be taken as input from user.
 date created 21-01-2018 @15:23
*/
void main()
{
    int n,i,sum=0;
    printf("enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(i%2!=0)
        sum+=i;
    printf("Sum:%d",sum);
    getch();
}
