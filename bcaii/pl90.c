#include<stdio.h>
#include<conio.h>
struct students{//student structure
        int rolln;
        char name[50];
        char dept[25];
        char course[25];
        int year;
    }st[450];
    static int n;
    int i;
void main(){
    int year,rn;
    printf("Enter no. of students(<450)\n ");    //reading number and details of the students
    scanf("%d",&n);
    printf("enter details of the students\n ");
    for(i=0;i<n;i++){
        printf("Enter roll number\t");
        scanf("%d",&st[i].rolln);
        printf("Enter name \t");
        scanf("%s",st[i].name);
        printf("Enter department  \t");
        scanf("%s",st[i].dept);
        printf("Enter course \t");
        scanf("%s",st[i].course);
        printf("Enter year of joining \t");
        scanf("%d",&st[i].year);
    }
    printf("enter year to search record\n");
    scanf("%d",&year);
    recyear(year);
    printf("\nenter roll num to search record\n");
    scanf("%d",&rn);
    recroll(rn);
    getch();
}
void recyear(int year){//function to search record for a given year
    printf("\n<<<<<<<Joining in the year %d>>>>>>>\n",year);
    for(i=0;i<n;i++){
        if(st[i].year==year){

            printf("\n%s",st[i].name);
        }
    }
}
void recroll(int rn){//function to search record for a given roll number
    for(i=0;i<n;i++){
        if(st[i].rolln==rn){
                printf("<<<<<<<Student record of %d>>>>>>>\n",rn);
            printf("%d\n%s\n%s\n%s\n%d",st[i].rolln,st[i].name,st[i].dept,st[i].course,st[i].year);
        }
    }
}
