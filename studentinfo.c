#include <stdio.h>
void main()
{
    FILE *fptr;
    int roll_no;
    char name[30];
    float m_mark;
    float p_mark;
    float c_mark;
    float t_mark;
    float cut_off;
    fptr = fopen("C://Users/Arjun Shiva PC/Desktop/emp.txt", "w+");
    if (fptr == NULL)
    {
        printf("File does not exists\n");
        return;
    }
    printf("Enter roll number: \n");
    scanf("%d", &roll_no);
    fprintf(fptr, "roll_no= %d\n", roll_no);
    printf("Enter the name: \n");
    scanf("%s", name);
    fprintf(fptr, "Name= %s\n", name);
    printf("Enter the maths marks:\n");
    scanf("%f", &m_mark);
    fprintf(fptr, "math mark= %.2f\n", m_mark);
    printf("Enter the physics marks:\n");
    scanf("%f", &p_mark);
    fprintf(fptr, "physics mark= %.2f\n", p_mark);
    printf("Enter the chemistry marks:\n");
    scanf("%f", &c_mark);
    fprintf(fptr, "chemistry mark= %.2f\n", c_mark);
    t_mark=m_mark+p_mark+c_mark;
    fprintf(fptr, "total marks= %.2f\n", t_mark);
    cut_off=m_mark+(p_mark+c_mark)/2;
    1
    fprintf(fptr, "cutoff mark= %.2f\n", cut_off);
    
    fclose(fptr);
}