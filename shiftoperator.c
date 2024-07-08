#include<stdio.h>
int main()
{
    unsigned int a=60;
    unsigned int b=13;
    int c=0;
    c=a & b;
    printf("Line -1 value is: %d\n",c);
    c=a | b;
    printf("Line -2 value is: %d\n",c);
    c=a ^ b;
    printf("Line -3 value is: %d\n",c);
    c=~a;
    printf("Line -4 value is: %d\n",c);
    c=a << 2;
    printf("Line -5 value is: %d\n",c);
    c=a >> 2;
    printf("Line -6 value is: %d\n",c);
    return 0;
}