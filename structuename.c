#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
};
int main()
{
    struct employee e1,e2;
    printf("enter id and name: \n");
    scanf("%d",&e1.id);
    scanf("%s",e1.name);
    printf("enter id and name: \n");
    scanf("%d",&e2.id);
    scanf("%s",e2.name);
    printf("employe 1 id%d\n",e1.id);
    printf("employee 1 name:%s\n",e1.name);
    printf("employe 2 id%d\n",e2.id);
    printf("employee 2 name:%s\n",e2.name);
    return 0;
}