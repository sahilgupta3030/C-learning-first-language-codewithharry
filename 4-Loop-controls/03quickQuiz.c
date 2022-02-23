#include <stdio.h>
int main()
{
    int t;
    printf("enter the number\n");
    scanf("%d", &t);
    if (t >= 10)
    {
        while (t <= 20)
        {

            printf("Natural Numbers between 10 & 20 are %d\n", t);

            t++;
        }
    }
    return 0;
}