#include<stdio.h>
void main()
{
    int x[5],y[5],z[5],i;
    printf("enter first array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        
    }
    printf("enter second array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<5;i++)
    {
        z[i]=x[i];
        x[i]=y[i];
        y[i]=z[i];
        
    }

    printf("arrays after swpaping\n");
    printf("first array:\n ");
    for(i=0;i<5;i++)
   {
    printf("%d \t",x[i]);
    
   }
    printf("\nsecond array:\n");
    for(i=0;i<5;i++)
    {
    printf("%d \t",y[i]);
    }
}