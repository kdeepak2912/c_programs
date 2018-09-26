#include<stdio.h>
#include<conio.h>
void input();
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);//functions prototype

void main()
{
    int n1,n2;
    input();
    getch();
}

void input(){
    int n1,n2,result;
    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("enter 1 for the addition\n2for subtraction\n3 for multiplication\n 4 for division\n and 5 for remainder\n");
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1:
            result=add(n1,n2);
    printf("Result is %d",result);
            break;
        case 2:
            result=sub(n1,n2);
    printf("Result is %d",result);
            break;
        case 3:
            result=mul(n1,n2);
    printf("Result is %d",result);
            break;
        case 4:
            result=div(n1,n2);
    printf("Result is %d",result);
            break;
        case 5:
            result=mod(n1,n2);
    printf("Result is %d",result);
            break;
        default:
            printf("Invalid Choice!");
    }
    getch();
}

int add(int n,int N){
        return(n+N);
}

int sub(int n,int N){
    return(n-N);
}

int mul(int n,int N){
        return(n*N);
}

int div(int n,int N){
    if(N==0)
        printf("Can not divide by zero!!");
    else
        return(n/N);
}

int mod(int n,int N){
    if(N==0)
        printf("Can not divide by zero!!");
    else
        return(n%N);
}
