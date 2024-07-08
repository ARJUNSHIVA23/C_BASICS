#include <stdio.h>
int add(int,int);
void main()
{
int a,b;
int (*ip)(int,int);
int result;
printf("Enter the values of a and b : ");
scanf("%d %d",&a,&b);
ip=add;
result=(*ip)(a,b);
printf("Value after addition is : %d",result);n
}
int add(int a,int b)
{
int c=a+b;
return c;
}