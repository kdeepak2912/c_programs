#include<stdio.h>
#include<conio.h>
hcf(int a, int b){
    if(b==0)
        return b;
    else{
        return hcf(b,a%b);
    }
}
void main(){
    int n1,n2,n3,res=0;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    res=hcf(n1,n2);
    //res=hcf(res,n3);
    printf("HCF of three numbers is %d",res);
    getch();
}
