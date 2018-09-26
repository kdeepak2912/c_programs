/*union is used where large number of variables are required but only one is used at a time
it shares a memory location with several other objects of the union */
#include<stdio.h>
#include<conio.h>
void main(){
    union student{
        int rolln;
        float per;
        float att;
    }detail[10];
    int i;
    printf("Enter roll number, percentage, and attendance of the student\n");
    scanf("%d%f%f",&detail[0].  rolln,&detail[0].per,&detail[0].att);
    printf("Roll No is %d\npercentage is %f\nattendance is %f\n",detail[0].rolln,detail[0].per,detail[0].att);
    /*for(i=0;i<5;i++){
            printf("Enter roll number, percentage, and attendance of the student\n");
        scanf("%d%f%f",&detail[i].  rolln,&detail[i].per,&detail[i].att);
        }*/
    /*for(i=0;i<5;i++)
        printf("Roll No is %d\npercentage is %f\nattendance is %f\n",detail[i].rolln,detail[i].per,detail[i].att);*/
    getch();
}

