#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("MYFILE.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF) {
            break;
        }
        printf("%C",ch);
    }
    fclose(fp);
}

