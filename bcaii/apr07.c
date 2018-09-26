/*read n and display prime numbers up to n*/
#include<stdio.h>
#include<conio.h>
prime(int n, int f){
    if(f==1)
        return 1;
    else if(n%f==0)
        return 0;
    else
        return prime(n,f-1);
}
void main(){
    int i,n;
    printf("Enter a n\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
        if(prime(i,i/2))
            printf("%d\n",i);
    getch();
}
