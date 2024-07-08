#include<stdio.h>
int main()
{
    int a=70,b=40,*p1=&a,*p2=&b,temp;
    printf("Before swap *p1=%d *p2=%d",*p1,*p2);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("\nAfter swap *p1=%d *p2=%d",*p1,*p2);
    return 0;
}
