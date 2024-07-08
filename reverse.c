#include<stdio.h>
int main()
{
    int n,copy,sum=0;
    printf("enter a number: \n");
    scanf("%d",&n);
    copy=n;
    while(copy>0)
    {
        sum=sum*10;
        sum=sum+(copy%10);
        copy=copy/10;
    }
    if(n==sum){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not a palindrome");
    }
    return 0;
}