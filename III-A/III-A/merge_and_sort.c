
/*read two sorted arrays or initialize them,
WAP to read two sorted array and merge and sort them into a third array */
#include<stdio.h>
#include<conio.h>
void sortAscending(int num[],int size)
void main(){
    int index_1,index_2,index_3=0,size_1,size_2,size_3;
    printf("Enter size of the first array\n");
    scanf("%d",&size_1);
    int num_1[size_1];
    printf("Enter sorted array elements\n");
    for(index_1=0;index_1<size_1;index_1++){
        scanf("%d",&num_1[index_1]);
    }

    printf("\t****************");
    printf("\nEnter size of the second array\n");
    scanf("%d",&size_2);
    int num_2[size_2];
    printf("Enter sorted array elements\n");
    for(index_2=0;index_2<size_2;index_2++){
        scanf("%d",&num_2[index_2]);
    }

    size_3=size_1+size_2;
    int num_3[size_3];
    for(index_1=0;index_1<size_1;index_1++){
        num_3[index_3]=num_1[index_1];
        index_3++;
    }

    for(index_2=0;index_2<size_2;index_2++){
        num_3[index_3]=num_2[index_2];
        index_3++;
    }

    sortAscending(num_3,size_3);

    getch();
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
