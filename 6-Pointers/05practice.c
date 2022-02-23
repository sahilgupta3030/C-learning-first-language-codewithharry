#include <stdio.h>

int main()
{
    int i = 3;
    int *ptr;
    ptr = &i;

    int **ptr_to_ptr;
    ptr_to_ptr = &ptr;

    printf("The address i is %u\n", &i);
    printf("The address i is %u\n", ptr);
    printf("The address ptr is %u\n", ptr_to_ptr);
    printf("The address ptr is %u\n", &ptr);
    return 0;
}