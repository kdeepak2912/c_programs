#include<stdio.h>
#include<conio.h>
void main(){
    struct student{
        char name[27];
        int rollno;
    }s1;
    //as int is taking 4 bytes the size of the structure and the union will be always in the multiple of 4
    //e.g. for name with size 25-28, the cumulative size of the structure will be 32 bytes

    union stud{
        char name[21];
        int rollno;
    }s2;

    //size of structure and union is allocated in the multiple of the data type with the largest size

    char name[25];

    printf("Size of String with size 25 is %d\n",sizeof(name));

    printf("Size of structure is %d\n",sizeof(s1));

    printf("Size of union is %d\n",sizeof(s2));

    printf("\n\n\n value %d",-2%-3);
    //using float operand on % operator give a error
    //"invalid operands to binary % (have 'double' and 'int')|"
}
