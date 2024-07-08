#include<stdio.h>
void main(){
FILE *p;
char text[80];
p=fopen("C:/Users/Arjun Shiva PC/Desktop/tate.txt","r");
printf("%s",fgets(text,p));
fclose(p);
}