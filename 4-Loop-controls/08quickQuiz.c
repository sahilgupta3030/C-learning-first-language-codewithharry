#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter n from where you want the Reverse order\n", n);
    scanf("%d", &n);

    for (i = n; i; i--)
    {
        printf("%d\n", i);
        }

    return 0;
}