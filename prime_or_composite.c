#include<stdio.h>
 int main()
 {
    int n,flag,i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i!=0){
            continue;
        }
        else{
            flag=1;
            printf("it is a composite num\n");
            break;
        }

    }
    if(flag==0){
        printf("it is a prime no");
    }
    return 0 ;
 }