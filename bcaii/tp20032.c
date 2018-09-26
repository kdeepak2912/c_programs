/*wap to read array size and elements and to find largest number*/
#include<stdio.h>
#include<conio.h>
void main(){
    printf("Enter the size of the array\n");
    int n,i,max;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        printf("Enter %dth array element \n",i+1);
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(i=0;i<n;i++){
        if(max<num[i])
            max=num[i];
    }
    printf("Largest array element is %d.",max);
    getch();
}
