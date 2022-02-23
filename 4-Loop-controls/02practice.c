#include <stdio.h>
int main()
{
    int i;
    printf("***MULTIPLICATION TABLE OF 10 IN REVERSE IS***\n");
    for (i = 10; i; i--)
    {
        printf("10 times %d is %d\n", i, i * 10);
    }

    return 0;
}