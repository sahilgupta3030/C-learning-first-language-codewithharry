#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr = arr;

    ptr = ptr + 2;

    if (ptr == &arr[2])
    {
        printf("These points have the same location in memeory \n");
    }
    else
    {
        printf("These points DO NOT have the same location in memeory \n");
    }

    return 0;
}