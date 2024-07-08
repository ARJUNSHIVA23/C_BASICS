#include <stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
void main()
{
float x; // variable declaration.
float y;
float (*fp[4]) (float,float); // function pointer declaration.
fp[0]=add;
fp[1]=sub;
fp[2]=mul;
fp[3]=div;
printf("Enter the values of x and y :");
scanf("%f %f",&x,&y);
float r=(*fp[0]) (x,y); // Calling add() function.
printf("\nSum of two values is : %f",r);
r=(*fp[1]) (x,y); // Calling sub() function.
printf("\nDifference of two values is : %f",r);
r=(*fp[2]) (x,y); // Calliung sub() function.
printf("\nMultiplication of two values is : %f",r);
r=(*fp[3]) (x,y); // Calling div() function.
printf("\nDivision of two values is : %f",r);
}
float add(float x,float y)
{
float a=x+y;
return a;
}
float sub(float x,float y)
{
float a=x-y;
return a;
}
float mul(float x,float y)
{
float a=x*y;
return a;
}
float div(float x,float y)
{
float a=x/y;
return a;
}