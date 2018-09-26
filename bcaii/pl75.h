/*75) WAP to create a header file and including it. [Hint- add(), sub(), mul(), div() with calc.h]*/
void add(float a,float b)
{
    printf("Addition of %.2f and %.2f is %.2f",a,b,(a+b));
}
void sub(float a,float b)
{
    printf("Subtraction of %.2f and %.2f is %.2f",a,b,(a-b));
}
void mul(float a,float b)
{
    printf("Multiplication of %.2f and %.2f is %.2f",a,b,(a*b));
}
void div(float a,float b)
{
    if(b==0)
        printf("Can not divide by zero!!");
    else
        printf(" of %.2f and %.2f is %.2f",a,b,(a/b));
}
