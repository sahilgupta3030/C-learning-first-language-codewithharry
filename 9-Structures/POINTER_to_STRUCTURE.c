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

    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    // (*ptr).codenum = 101;

    ptr->codenum = 101;  // Arrow Operator

    printf("%d \n", e1.codenum);

    return 0;
}