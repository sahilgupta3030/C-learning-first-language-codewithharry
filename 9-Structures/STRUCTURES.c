#include <stdio.h>
#include <string.h>

struct employee
{
    int codenum;
    float salary;
    char name[10];
};

int main()
{

    struct employee e1;
    e1.codenum = 100;
    strcpy(e1.name, "Shubham");
    e1.salary = 4000.312452;

    printf("%s \n", e1.name);
    printf("%d \n", e1.codenum);
    printf("%.2f \n", e1.salary);

    return 0;
}