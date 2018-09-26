#include <stdio.h>
#include <stdlib.h>
#define d_t int
#define t_d d
int main(){
    int num, *ptr, sum = 0;
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    ptr = (int *) malloc(num*sizeof(int));
    if(ptr == NULL){
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Initial address is %u \n",ptr);
    ptr=realloc(ptr,num+1);
    printf("Enter elements of array: ");
    for(i = 0; i < num; ++i){
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %t_d", sum);
    free(ptr);
    return 0;
}
