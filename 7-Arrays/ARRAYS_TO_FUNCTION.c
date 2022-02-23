#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d \n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n", i + 1, ptr[i]);
    }
}

int main()
{
    int arr[] = {21, 64, 61, 79, 13, 91, 84};
    printArray(arr, 7);

    return 0;
}