#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("","w");
    fputc('a',fp);
    fclose(fp);

    return 0;
}