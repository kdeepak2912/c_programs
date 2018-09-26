        //search not returning result for last element
        //NOT WORKING, no output when the number of elements is odd

#include<stdio.h>
#include<stdlib.h>
int binarySearch(int num[],int l,int r,int search){
    while(l<=r){
        int mid=l+(r-1)/2;
        if(num[mid]==search){//checking if search is present in the array
            return mid;
        }else if(num[mid]<search){//if search is greater, ignore left half
            l=mid+1;
        }else {//if search is smaller, ignore right half
            r=mid-1;
        }
    }
    //if control reaches here the element was not present in the array
    return -1;
}
main(void){
   /* int arr_size,index,search,result;
    printf("Enter the array size\n");//reading the size of the array
    scanf("%d",&arr_size);
    int num[arr_size];//declaring the array of the size read by the user
    printf("Enter the array elements in sorted order\n");
    for(index=0;index<arr_size;index++){//reading the array elements from the user
        scanf("%d",&num[index]);
    }
    printf("Enter the search element\n");
    scanf("%d",&search);*/

    int num[]={1,2,3,4,5,6,7,8};
    int size=sizeof(num)/sizeof(num[0]);
    int search=9;

    int result=binarySearch(num,0,size-1,search);
    (result==-1)?printf("%d is not present in the array.",search):printf("%d is present at %dth index.",search,result);
    getch();
    return 0;
}
