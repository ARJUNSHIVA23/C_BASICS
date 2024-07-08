#include <stdio.h>
int main()
{
    int n,copy,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    copy=n;
    while(copy >0)
    {
        int a=(copy%10);
        sum =sum+(a*a*a);
        copy=copy/10;
    }
    if (sum==n)
    {
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");
    }
    return 0;
}
