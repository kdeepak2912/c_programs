#include<stdio.h>
#include<conio.h>
main (){
    int n,i,num[99];
    printf("Enter the size of the array(<99)\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int min=num[0],max=0;
    for(i=0;i<n;i++){
        if(min>num[i]){
            min=num[i];
        }
        if(max<num[i]){
            max=num[i];
        }
    }
    printf("Minimum number in the array is %d \n",min);
    printf("Maximum number in the array is %d",max);
    getch();
    return 0;
}
