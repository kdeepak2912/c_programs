/*64) WAP to input an array of 5 elements and print min number.
date created 11-02-2018 @14:30*/
#include"stdio.h"
#include"conio.h"
void main(){
    int num[5];
    int index;
    printf("Enter 5 Array Elements \n");
    for(index=0;index<5;index++){//loop to read the elements of the array
        scanf("%d",&num[index]);
    }
    int min=num[0];//assuming number at 0th location to be smallest
    for(index=0;index<5;index++){//loop to find the smallest number
        if(num[index]<min)
            min=num[index];
    }
    printf("Smallest number is %d",min);//printing the smallest number
    getch();
}
