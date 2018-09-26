#include<stdio.h>
#include<stdlib.h>
int binarySearch(int num[], int l, int r, int x){
    int mid=l+(r-1)/2;
    if(num[mid]==x){//if number is present return the index
        return mid;
    }
    if(num[mid]>x){//if element is smaller than num[mid], then it can only be present in right subarray
        return binarySearch(num,l,mid-1,x);
    }else{//else the element can only be present in right subarray
        return binarySearch(num,mid+1,r,x);
    }
    return -1;//control reaches only here, if element is not present int the array
}

main (void){
    int num[]={1,2,3,4,5,6,7,8};
    int size=sizeof(num)/sizeof(num[0]);
    int search=8;
    int result=binarySearch(num,0,size-1,search);
    (result==-1)?printf("The %d is not present in the array.",search):printf("%d is present at %dth index.",search,result);
    getch();
    return 0;
}
