#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    char c;
    int nt=0,ns=0,ne=0;
    fp=fopen("E:\deepak.txt","r");
    while(1){
        c=fgetc(fp);
        if(c==EOF)
            break;
            if(c=='\t')
                nt++;
            if(c=='\n')
                ne++;
            if(c==' ')
                ns++;
    }fclose(fp);
    printf("Number of spaces in file is %d\n",ns);
    printf("Number of tabs in file is %d\n",nt);
    printf("Number of enter in file is %d\n",ne);
    getch();
}
