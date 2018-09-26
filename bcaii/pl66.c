/*66) WAP to input an array of 5 elements and print average.
date created 11-02-2018 @14:39*/
#include"stdio.h"
#include"conio.h"
void main(){
    int num[5];
    int index;
    printf("Enter Array Elements");
    for(index=0;index<5;index++){//loop to read the elements of the array
        scanf("%d",&num[index]);
    }
    int sum=0;
    for(index=0;index<5;index++){//loop to find the sum of the array elements
        sum+=num[index];
    }
    float avg=sum/5;
    printf("Average of the /**/ numbers is %f",avg);//calculating and printing the average number
    getch();
}


