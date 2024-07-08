#include<stdio.h>
const int max =10;
void main()
{
    int var[] = {10, 100, 200,300,500,700,900,1000,2000,3000};
    int i,*ptr[max];
    for ( i = 0; i < max; i++)
    {
    ptr[i] = &var[i]; /* assign the address of integer. */
    }
    for ( i = 0; i < max; i++)
    {
    printf("Value of var[%d] = %d\n", i,*ptr[i] );
    }
}