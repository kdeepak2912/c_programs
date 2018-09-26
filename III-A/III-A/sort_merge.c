//C program to merge sort
#include<stdio.h>
#include<stdlib.h>
//merge two subarrays of array[]
//first subarray is arr[1..m]
//second subarray is arr[m+1..r]
void merge(int arr[],int l, int m, int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    //create a temp array
    int L[n1],R[n2];
    //Copy data to temp array L[] and R[]
    for(i=0;i<n1;i++){
        L[i]=arr[l+1];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }

    //merge the temp array back into array arr[..r]
    i=0;//Initial index of first subarray
    j=0;//Initial index of second subarray
    k=l;//Initial index of merged subarray
    while((i<n1&&j<n2)){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=L[j];
            j++;
        }
        k++;
    }

    //copy the remaining elements of L[], if there are any
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    //copy the remaining elements of the R[], if there are any
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

//l is left index and r is right index of the sub-array of arr to be sorted
void mergeSort(int num[],int l, int r){
    if(l<r){
        //same as (l+r)/2, but avoid overflow for large l and h
        int m=l+(r-1)/2;
        //sort first and second halves
        mergeSort(num,1,m);
        mergeSort(num,m+1,r);

        merge(num,l,m,r);
    }
}
//UTILITY FUNCTION
//function to print an array
void printArray(int num[], int size){
    int i;
    printf("Elements of the array are\n");
    for(i=0;i<size;i++){
        printf("%d\n",num[i]);
    }
    printf("\n\t\t*************\n");
}


//drive program to test merge sort functions
main(void){
    int size,i,arr_size,num[22];
    //reading the array from the use
    char choice;
    do{
        printf("Enter the number of numbers you want to enter(<22)\n");
        scanf("%d",&size);
    }while((size<1)||(size>22));

    printf("Enter the number(s)\n");
    for(i=0;i<size;i++){
        scanf("%d",&num[i]);
    }
    //finding size and calling functions
arr_size=sizeof(num)/sizeof(num[0]);

    mergeSort(num,0,arr_size-1);

    printArray(num,arr_size);
    return 0;
}












