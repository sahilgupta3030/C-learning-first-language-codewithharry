#include <stdio.h>
int main()
{
    int Multiples[10];

    for (int i = 0; i < 10; i++)
    {
        Multiples[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {

        printf("5 multiplied to %d is %d \n", i + 1, Multiples[i]);
    }

    return 0;
}