#include<stdio.h>
typedef struct student
{
    char name[20];
    int age;
}stud;
int main()
{
    stud s1;
    printf("enter the details of student s1 \n");
    printf("enter the name of the student s1: \n");
    scanf("%s",&s1.name);
    printf("enter the age of the student \t");
    scanf("%d",&s1.age);
    printf("the name of the student is: %s",s1.name);
    printf("the age of the student is: %d",s1.age);
    return 0;

}