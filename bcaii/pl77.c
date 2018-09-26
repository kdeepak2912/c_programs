/* 77) WAP to display nth number of Fibonacci series using recursion.
 */
#include <stdio.h>
fibo(int);
main(){
    int num,result;
    printf("Enter the nth num in fibonacci series\n");
    scanf("%d", &num);
    if (num < 0){
        printf("Fibonacci of negative number is not possible.\n");
    }
    else{
        result = fibo(num);
        printf("The %dth num in fibonacci series is %d\n", num, result);
    }
    return 0;
}
int fibo(int num){
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else{
        return(fibo(num - 1) + fibo(num - 2));
    }
}
