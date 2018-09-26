#include<conio.h>
#include<stdio.h>
void fun();//function prototype
void fun1();//function prototype
void main()//calling function
{
    fun();
    printf("***************");
    fun2();//called function
    getch();
}
void fun(){//function definition
    printf("perform addition of two numbers\n");

}
void fun2(){//function definition
        int a,b,c;
        printf("\nenter 2 int\n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("sum of %d & %d = %d",a,b,c);
}
