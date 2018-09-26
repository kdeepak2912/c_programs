#include<stdio.h>
#include<conio.h>
#include<math.h>
float d(float, float, float);
main (void){
    float a,b,c,deter;
    printf("Enter the value of a, b, and c\n");;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0||b==0||c==0){
        printf("Error:Roots can not be determined");
        exit(1);
    }
    deter=d(a,b,c);
    if(deter<0.0){
        printf("Roots are imaginary!!");
    }else if(deter==0.0){
        printf("Roots are equal.");
        printf("Root is  \n .2%f",-b/(2.0*a));
    }else {
        printf("Both roots are real.");
        printf("\nRoots are  \n %f \n and \n %f",((-b+sqrt(deter))/(2.0*a)),((-b-sqrt(deter))/(2.0*a)));
    }
}
float d(float a, float b, float c){
    return (b*b)-(4.0*a*c);
}
