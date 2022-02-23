#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int codenum;
    float salary;
};

int main()
{

    struct employee e1, e2, e3;

    printf("Enter Employee Name E1");
    scanf("%s", e1.name);
    printf("Enter Employee Code for E1");
    scanf("%d", &e1.codenum);
    printf("Enter Employee Salary for E1");
    scanf("%f", &e1.salary);

    printf("Enter Employee Name E2");
    scanf("%s", e2.name);
    printf("Enter Employee Code for E2");
    scanf("%d", &e2.codenum);
    printf("Enter Employee Salary for E2");
    scanf("%f", &e2.salary);

    pintf("Enter Employee Name E3");
    scanf("%s", e3.name);
    printf("Enter Employee Code for E3");
    scanf("%d", &e3.codenum);
    printf("Enter Employee Salary for E3");
    scanf("%f", &e3.salary);

    return 0;
}