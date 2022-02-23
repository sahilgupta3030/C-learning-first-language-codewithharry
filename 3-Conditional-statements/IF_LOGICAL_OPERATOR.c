#include <stdio.h>
int main()
{

    int age;

    int vipPass;
    vipPass = 1;

    printf("Enter Your Age\n");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || vipPass == 1)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You canNot Drive!\n");
    }

    return 0;
}
