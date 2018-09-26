/*69) WAP to sort an array of element using bubble sort.
date created 14-02-2018 @1155*/
#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,j;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int num[n];
    printf("**Enter array elements**\n");
    for(i=0;i<n;i++){
        printf("Enter the %dth element\n",i);
        scanf("%d",&num[i]);
    }//reading the elements from the user
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(num[j]>num[j+1]){
                num[j]=num[j]+num[j+1];
                num[j+1]=num[j]-num[j+1];
                num[j]=num[j]-num[j+1];
            }
        }
    }//algorithm for bubble sort where adjacent elements are compared and swapped
    //according to the condition
    printf("Sorted array elements are\n");
    for(i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
    getch();
}
