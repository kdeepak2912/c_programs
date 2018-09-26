#include<stdio.h>
#include<conio.h>
main(void){
    int size,i,search,flag;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int num[size];
    printf("Enter the array elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&num[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&search);
    for(i=0;i<size;i++){
        if(num[i]==search){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d is present in the array.",search);
    }else{
        printf("%d is not present in the array",search);
    }
    getch();
    return 0;
}
