#include <stdio.h>
void printAdd(int a)
{
    printf("The Address of variable a is %u\n", &a);
}
int main()
{
    int i = 4;
    int *a = &i;

    printf("The address of 'i' is %u\n", &i);
    printAdd(i);
    printf("The Address through a is %u\n", a);

        return 0;
}