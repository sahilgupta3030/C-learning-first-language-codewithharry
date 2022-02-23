#include <stdio.h>
void PrintTable(int *MulTable, int numberr, int n)
{

    printf("The Multiplicationn Table of %d is : \n", numberr);
    for (int i = 0; i < n; i++)
    {
        MulTable[i] = numberr * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d multiplied %d is %d \n", numberr, i + 1, MulTable[i]);
    }
    printf("\n");
    printf("********************************************************* \n \n");
}

int main()
{

    int MulTable[3][10];
    PrintTable(MulTable[0], 2, 10);
    PrintTable(MulTable[1], 7, 10);
    PrintTable(MulTable[2], 9, 10);

    return 0;
}