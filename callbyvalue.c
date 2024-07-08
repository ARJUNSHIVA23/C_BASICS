#include<stdio.h>
void swap(int *, int*);
int main()
{
    int a=100,b=200;
    printf("before value swap for a: %d\n",a);
    printf("before swap value for b: %d\n",b);
    swap(&a,&b);
    printf("After value swap of a: %d\n",a);
    printf("After value swap of b: %d\n",b);
    return 0;
}
void swap(int* x, int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;


}