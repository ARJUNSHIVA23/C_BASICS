#include<stdio.h>

union abc
{
    int c;
    char b;
    
}var;
int main()
{
    var.a=66;
    printf("\n a=%d",var.a);
    printf("\n b=%c",var.b);
}