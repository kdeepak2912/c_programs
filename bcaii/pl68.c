/*68) WAP to delete a number from the desired location.
date created 14-02-2018 @1140*/
#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,index;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int num[n];
    printf("****Enter the Elements****\n");
    for(i=0;i<n;i++){
        printf("Enter the %dth element\n",i+1);
        scanf("%d",&num[i]);
    }//reading the array from the user
    printf("Enter the index of the number to be deleted\n");
    scanf("%d",&index);//reading the index to deleted form array
    if(index<=n){
        for(i=index-1;i<n;i++){
            num[i]=num[i+1];
        }
        printf("Array elements after deleting the given index\n");
        for(i=0;i<n-1;i++){
            printf("%d\n",num[i]);
        }
    }
    else{
        printf("Array index out of range!");
    }
    getch();
}
