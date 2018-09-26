#include<stdio.h>
main(){
    int i=10;
    {
        i=5;
        printf("%d",i);
    }
    printf("\n%d",i);
    return 0;
}
/*#include<stdio.h>
void fun(){
    static  int a=10;
    a=a+10;
    printf("%d",a);
}
main(){
    fun();
    fun();
}
*/
