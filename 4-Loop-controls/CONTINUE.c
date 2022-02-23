#include <stdio.h>
int main()
{
    int m = 5, i = 0;

    while (i < 10)
    {
        
        printf("%d\n", i++);
        if (i != m)
        
            continue;
        
        else
        
            printf("%d\n", i);

        
    }

    return 0;
}