/*65) WAP to input an array of 5 elements and print m number.
date created 11-02-2018 @14:39*/
#include"stdio.h"
#include"conio.h"
void main(){
    int num[5];
    int index;
    printf("Enter Array Elements\n");
    for(index=0;index<5;index++){//loop to read the elements of the array
        scanf("%d",&num[index]);
    }
    int max=num[0];//assuming number at 0th location to be largest
    for(index=0;index<5;index++){//loop to find the largest number
        if(num[index]>max)
            max=num[index];
    }
    printf("Largest number is %d",max);//printing the largest number
    getch();
}

