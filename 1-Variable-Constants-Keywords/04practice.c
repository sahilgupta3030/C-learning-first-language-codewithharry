#include <stdio.h>
int main()
{

    int principal, rate, years;

    printf("Enter the Principal amount\n");
    scanf("%d", &principal);

    printf("Enter the rate of the interest\n");
    scanf("%d", &rate);

    printf("Enter the years\n");
    scanf("%d", &years);

    printf("Your Simple Interest will be %d", (principal * rate * years) / 100);

    return 0;
}