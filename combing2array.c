#include<stdio.h>
void main()
{
    int ar1size=5,ar2size=5,ar_solsize,i,j;
    
    int a1[5]={10,40,3,4,68};
    int b2[5]={264,7,867,9,107};
    
    ar_solsize=ar1size+ar2size;
    int c3[ar_solsize];
    int count=0;
    
    for(i=0;i<ar1size;i++)
    {
        c3[i]=a1[i];
        count++;
        
    }
    
    for(j=0;j<ar2size;j++)
    {
        c3[count++]=b2[j];
       
    }
     
    for(i=0;i<ar_solsize;i++)
    {
        printf(" %d \t",c3[i]);
    }
}