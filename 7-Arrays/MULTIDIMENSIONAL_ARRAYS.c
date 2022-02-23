#include <stdio.h>
int main()
{
    int N_Students = 3, N_Subjects = 5;

    int marks[3][5];
    for (int i = 0; i < N_Students; i++)
    {
        for (int j = 0; j < N_Subjects; j++)
        {
            printf("Enterrr the marks of %d student in %d subjects: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < N_Students; i++)
    {
        for (int j = 0; j < N_Subjects; j++)
        {
            printf("The marks of %d student in %d subjects is %d \n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}