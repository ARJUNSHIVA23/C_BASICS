#include <stdio.h>

int main()
{
    FILE *p;
    int length;
    p=fopen("C:/Users/Arjun Shiva PC/Desktop/CLASS26.txt","r");
    fseek(p,0,SEEK_END);
    length=ftell(p);
    fclose(p);
    printf("Size:%d",length);

    return 0;
}