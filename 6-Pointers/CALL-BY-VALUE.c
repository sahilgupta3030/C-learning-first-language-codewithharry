#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The value of a And b is %d ad %d\n", a, b);
    printf("The value of 4+7 is %d\n", sum(a, b));
    printf("The value of a And b after function call is %d ad %d\n", a, b);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 555;
    b = 666;
    return c;
}