#include<stdio.h>
d2oct(int);
main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("Octal of %d is %d.",num,d2oct(num));
    return 0;
}

d2oct(int num){
    int rem,oct=0,octr=0;
    while(num!=0){
        oct=oct*10+num%8;
        num/=8;
    }
    while(oct>0){
        octr=octr*10+oct%10;
        oct/=10;
    }
    return octr;
}
