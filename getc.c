#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("C:/Users/Arjun Shiva PC/Desktop/tate.txt","r");
    while ((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);

    }
    fclose(fp);    

}