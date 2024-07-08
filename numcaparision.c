#include <stdio.h>
int main() 
{
    int num1=5,num2=6,num3=5;
    int *p1=&num1;
    int *p2=&num2;
    int *p3=&num3;
    if(*p1<*p2){
    printf("\n%d less than %d",*p1,*p2);
    }
    if(*p2>*p1)
    {
    printf("\n%d greater than %d",*p2,*p1);
    }
    if(*p3==*p1)
    {
    printf("\nBoth the values are equal");
    }
    if(*p3!=*p2)
    {
    printf("\nBoth the values are not equal");
    }
    return 0;
}