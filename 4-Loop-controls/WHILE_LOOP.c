#include <stdio.h>
int main()
{
    int k = 13;
    printf("enter value\n");
    scanf("%d", &k);

    while (k > 12)
    {
        printf("%d\n", k);
        k++;
    }
// this leadss to infinite loop
    return 0;
}