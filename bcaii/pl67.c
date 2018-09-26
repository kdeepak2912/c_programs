/*67) WAP to insert a number at the position where user wants to insert.
date created */
#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,index,nmbr;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int num[n];
    printf("****Enter elements****\n");
    for(i=0;i<n;i++){
        printf("Enter the %dth element\n",i+1);
        scanf("%d",&num[i]);
    }//reading the array from the user of the program
    printf("Enter the index to insert\n");
    scanf("%d",&index);
    printf("Enter the element to insert\n");
    scanf("%d",&nmbr);
    //reading the index and element to insert
    if(index<=n){
        for(i=n-1;i>=index-1;i--){
            num[i+1]=num[i];
        }
        num[index-1]=nmbr;
        printf("Array elements after insertion are\n");
        for(i=0;i<n;i++){
            printf("%d\n",num[i]);
        }
    }
    else{
        printf("Array index out of range!");
    }
    getch();
}
