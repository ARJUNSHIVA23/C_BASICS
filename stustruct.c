#include <stdio.h>
void main()
{
    FILE *f;
    int id;
    char name[30];
    float a;
    f = fopen("emp.txt", "w+");
    if (f == NULL)
    {
        printf("File does not exists\n");
        return;
    }
    printf("Enter the id:\n");
    scanf("%d", &id);
    fprintf(f, "Id= %d\n", id);
    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(f, "Name= %s\n", name);
    printf("Enter the Score:\n");
    scanf("%f", &a);
    fprintf(f, "Score= %.2f\n", a);
    if (a>=90)
    {
        fprintf(f,"Your grade: A");
    }
    else if (a>=80&&a<90)
    {
        fprintf(f,"Your grade: B");
    }
    else if (a>=70&&a<80)
    {
        fprintf(f,"Your grade: C");
    }
    else if (a<70)
    {
        fprintf(f,"Your grade: D");
    }
    fclose(f);
}