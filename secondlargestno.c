#include <stdio.h>
const int MAX = 4;
void main () 
{
int temp;
int var[5];
int i,j,*ptr[MAX];
printf("Enter the number\n");
for (i=0;i<MAX;i++)
{
    scanf("%d",&var[i]);
}
for (i=0;i<MAX;i++)
{
ptr[i]=&var[i]; 
}
for (i=0;i<MAX;i++)
{
    for (j=i+1;j<MAX;j++)
    {
        while (*ptr[i]>*ptr[j])
        {
            temp=*ptr[i];
            *ptr[i]=*ptr[j];
            *ptr[j]=temp;
        }
    }
}
  printf("The second greatest number:%d",*ptr[3]);
}