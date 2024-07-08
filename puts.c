#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("C:/Users/Arjun Shiva PC/Desktop/tate.txt","w");
    fputs("hello c programming",fp);
    fclose(fp);
}