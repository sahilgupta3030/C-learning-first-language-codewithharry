#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter 'n' For the multiplication Table\n", n);
    scanf("%d", &n);

    printf("MULTIPLICATION TABLE OF %d IS\n", n);
    for (i = 1; i < 11; i++)
    {
        printf("%d times %d equals %d \n", n, i, n * i);
    }
    return 0;
}