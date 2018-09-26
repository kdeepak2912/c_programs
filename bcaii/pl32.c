/*32) Program to find the sum of squares of first N natural numbers.
Value of N should be taken as input from user
date created 21-01-2018 @15:24

*/
void main()
{
    int n,i,sum=0;
    printf("enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i*i;
    printf("Sum:%d",sum);
    getch();
}
