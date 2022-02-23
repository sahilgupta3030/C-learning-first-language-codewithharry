#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter The value of a \n", a);
    scanf("%d", &a);

    printf("Enter The value of b \n", b);
    scanf("%d", &b);

    printf("Enter The value of c \n", c);
    scanf("%d", &c);

    printf("The Avverage is %f\n", average(a, b, c));

    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}