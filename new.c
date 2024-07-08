#include <stdio.h>
int main()
{
    int x;
    int N = 4;
    int *ptr1, *ptr2;
    ptr1 = &N;
    ptr2 = &N;
    ptr2 = ptr2 + 3;
    x = ptr2 - ptr1;
    printf("Subtraction of ptr1 & ptr2 is %d\n", x);
    return 0;
}