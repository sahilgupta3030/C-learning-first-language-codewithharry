#include <stdio.h>
int main()
{
    int a;
    printf("enter value\n");
    scanf("%d", &a);

    while (a < 12)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}