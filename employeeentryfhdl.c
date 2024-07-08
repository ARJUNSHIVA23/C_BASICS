#include <stdio.h>
void main()
{
    FILE *fptr;
    int id;
    char name[30];
    float salary;
    fptr = fopen("myfile.txt", "w+");
    if (fptr == NULL)
    {
        printf("File does not exists\n");
        return;
    }
    printf("Enterthe id\n");
    scanf("%d", &id);
    fprintf(fptr, "Id= %d\n", id);
    printf("Enterthe name \n");
    scanf("%s", name);
    fprintf(fptr, "Name= %s\n", name);
    printf("Enterthe salary\n");
    scanf("%f", &salary);
    fprintf(fptr, "Salary= %.2f\n", salary);
    fclose(fptr);
}
