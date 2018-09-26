#include<stdio.h>
#include<conio.h>
void main(){
    struct student{
        int rolln;
        float per;
        float att;
    }detail[10];
    int i;
    for(i=0;i<5;i++){
            printf("Enter roll number, percentage, and attendance of the student\n");
        scanf("%d%f%f",&detail[i].  rolln,&detail[i].per,&detail[i].att);
        }
    for(i=0;i<5;i++)
        printf("Roll No is %d\npercentage is %f\nattendance is %f\n",detail[i].rolln,detail[i].per,detail[i].att);
    getch();
}
