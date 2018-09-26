/*70) WAP to pass an array of element through a function.
date created 14-02-2018 @1220*/
#include<stdio.h>
#include<conio.h>
void sort(int num[],int);
void main(){
    int n,i,j;
    printf("Enter number of array elements\n");
    scanf("%d",&n);
    int num[n];
    printf("***Enter Array Elements***\n");
    for(i=0;i<n;i++){
        printf("Enter the %dth element\n",i);
        scanf("%d",&num[i]);
    }//reading the elements from the user
    sort(num,n);
    getch();
}
void sort(int num[],int n){
        int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(num[i]>num[j]){
                num[i]=num[i]+num[j];
                num[j]=num[i]-num[j];
                num[i]=num[i]-num[j];
            }
        }
    }//algorithm for selection sort where element at the index of outer loop is compared with
    // following elements
    printf("Sorted array elements are\n");
    for(i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
}
