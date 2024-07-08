#include <stdio.h>

int main()
{
    FILE*p;
    char c;
    p=fopen("C:/Users/Arjun Shiva PC/Desktop/CLASS26.txt","r");
    while((c=fgetc(p))!=EOF)
    {
        printf("%c",c);
    }
    printf("\n");
    rewind(p);
    while((c=fgetc(p))!=EOF)
    {
        printf("%c",c);
    }

    return 0;
}
