#include<stdio.h>
#include<conio.h>
void main(){
    FILE  *fp;
    char ch;
    fp=fopen("gcdrec.C","R");
    while(1){
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);
    getch();
}
