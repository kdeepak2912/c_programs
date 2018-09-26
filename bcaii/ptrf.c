#include<stdio.h>
#include<conio.h>
void main(){
    int display();
    int(* func_ptr)();
    func_ptr=display;/*assign address of function */
    printf("\nAddress of function display is %u", func_ptr);
    printf("\nAddress of function display is %u", (func_ptr+1));
    printf("Value = %f",*func_ptr);/*invokes the function display*/
           }
display(){
    printf("\nSum of the values is");
    printf("New");
         }
