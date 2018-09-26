/*wap to read array size and elements and to find smallest number*/
#include<stdio.h>
#include<conio.h>
void main(){
    printf("Enter the size of the array\n");
    int n,i,min;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        printf("Enter %dth array element \n",i+1);
        scanf("%d",&num[i]);
    }
    min=num[0];
    for(i=0;i<n;i++){
        if(min>num[i])
            min=num[i];
    }
    printf("Smallest array element is %d.",min);
    getch();
}
