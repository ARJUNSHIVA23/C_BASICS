#include <stdio.h>
void main()
{
    int i,n,j;
    printf("enter a number for size;\n");
    scanf("%d",&n);
    for (i=n;i >= 0; i--)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    
}
enter a number for size;
6
******
*****
****
***
**
*