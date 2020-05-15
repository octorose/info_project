#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;
    int id;
 
    /*  open for writing */
    fptr = fopen("emp.txt", "a");
 
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }
    printf("Donner son Id\n");
    scanf("%d",&id);
    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(fptr, "[%d-Name    = %s\n", id,name);
    printf("Enter the age\n");
    scanf("%d", &age);
    fprintf(fptr, "%d-Age     = %d\n", id,age);
    printf("Enter the salary\n");
    scanf("%f", &salary);
    fprintf(fptr, "%d-Salary  = %.2f]\n", id,salary);
    fclose(fptr);
}
