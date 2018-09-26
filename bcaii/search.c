//linear search of the array
#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,search,flag=0;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        printf("Enter %dth array element:",i+1);
        scanf("%d",&num[i]);
    }
    printf("Enter the value to search\n");
    scanf("%d",&search);
    find(search, num, n);

    getch();
}
void find(int search, int num[],int n){
    int i,flag=0;
    for(i=0;i<n;i++){
        if(search==num[i]){
            flag=1;
            break;
        }
    }
    if(flag)
    printf("The value is found at %dth location.",i+1);
    else
        printf("The value does not exist in the array.");
}
