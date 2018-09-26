#include<stdio.h>#include<conio.h>
GCD(int a,int aa){
    if(aa==0)
        return a;
    else
        return GCD(aa,a%aa);
    }
void main(){
    int a,aa;
printf("Enter 2 num\n");
scanf("%d%d",&a,&aa);
while(a%aa!=0){
   int t=aa;
   aa=a%aa;
   aa=t;
}
printf("GCD is %d",aa);
getch();
}
