#include <stdio.h>
int main()
{
    int appple = 6;
    int *pome = &appple;

    printf("The Address of variable apple is %u\n", pome);
    printf("The VALUE of variable apple is %d\n", *pome);
    printf("The Address of variable apple is %u\n", &appple);
    return 0;
}