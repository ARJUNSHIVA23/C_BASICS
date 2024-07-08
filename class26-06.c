#include<stdio.h>
void main()
{
    FILE*p;
    p=fopen("C:/Users/Arjun Shiva PC/Desktop/tate.txt","w+");
    fputs("this is a message",p);
    fseek(p,10,SEEK_END);
    fputs("yashaswi jaiswal",p);
    fclose(p);
}