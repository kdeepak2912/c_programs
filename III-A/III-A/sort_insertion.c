/*created by dev on 05-08-18 @18:13
it sorts by inserting the elements in the sorted part of the array
after picking it from the unsorted part of the array
*/
#include<stdio.h>
#include<conio.h>
void insertionSort(int num[],int n);
 main(void){
    int n,i,j;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int num[n];
    printf("\n\n\t<<<<<<<<<<<<-->>>>>>>>>>>>>\nEnter %d elements in the array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    insertionSort(num,n);
    return 0;
}

void insertionSort(int num[],int n){
    int i,j,value,hole;
    for(i=1;i<n;i++){
        value=num[i];
        hole=i;
        while(hole>0&&num[hole-1]>value){
            num[hole]=num[hole-1];
            --hole;
        }
        num[hole]=value;
    }
    printf("\n\t<<<<<<<<<<<-->>>>>>>>>>>>\nSorted numbers are\n");
    for(i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
}
