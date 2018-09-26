#include<stdio.h>
void swap(int *p4,int *p2){
    int *p3;
    *p3=*p4;
    *p4=*p2;
    *p2=*p3;
    printf("%ud\n%ud\n",*p4,*p2);
}
main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf(" After Swap a=%d\nb=%d",a,b);
    return 0;
}
