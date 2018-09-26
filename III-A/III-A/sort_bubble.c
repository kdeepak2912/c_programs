#include<stdio.h>
#include<stdio.h>
void sortAscending(int num[], int size);
void sortDescending(int num[],int size);
void main(){
    int num[20];
    int size,i,j;
    char choice;
    do{
        printf("Enter the number of numbers you want to enter(<20)\n");
        scanf("%d",&size);
    }while((size<1)||(size>20));

    printf("Enter the number(s)\n");
    for(i=0;i<size;i++){
        scanf("%d",&num[i]);
    }

    do{
        printf("\nEnter A to sort in ascending order.");
        printf("\nEnter D to sort in descending order.");
        printf("\nEnter your choice:\n");
        scanf(" %c",&choice);
    }while((choice!='a')&&(choice!='A')&&(choice!='d')&&(choice!='D'));

    if((choice=='A')||(choice=='a')){
        sortAscending(num,size);
    }
    if((choice=='D')||(choice=='d')){
        sortDescending(num,size);
    }
}

void sortAscending(int num[],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size-i;j++){
            if(num[j]>num[j+1]){
                num[j]+=num[j+1];
                num[j+1]=num[j]-num[j+1];
                num[j]=num[j]-num[j+1];
            }
        }
    }

    printf("Sorted numbers in ASCENDING ORDER are\n");
    for(i=0;i<size;i++){
        printf("%d\n",num[i]);
    }
}

void sortDescending(int num[],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size-1;j++){
            if(num[j]<num[j+1]){
                num[j]+=num[j+1];
                num[j+1]=num[j]-num[j+1];
                num[j]=num[j]-num[j+1];
            }
        }
    }

    printf("Sorted numbers in DESCENDING ORDER are\n");
    for(i=0;i<size;i++){
        printf("%d\n",num[i]);
    }
}
