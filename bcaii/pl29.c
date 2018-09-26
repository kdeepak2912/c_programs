/*
29) Program to print the following pattern:
10 9 8 7
6 5 4
3 2
1

date created 21-01-2018 @15:19
*/
void main()
{
    int r,c,num=10;
    for(r=1;r<5;r++)
    {
        for(c=5;c>r;c--)
        {
            printf("%d ",num);
            num--;
        }
        printf("\n");
    }
    getch();
}

