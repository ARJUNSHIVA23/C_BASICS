#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("C:/Users/Arjun Shiva PC/Desktop/New folder/1.Arithmetic operations.txt","r");
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

