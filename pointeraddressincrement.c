#include<stdio.h>
int main()
{
    int number=50;
    int*p;
    p=&number;
    printf("Address of p variable %u\n",p);
    p=p+3;
    printf("After increment the value of new address is %u\n:",p);
    return 0;
}