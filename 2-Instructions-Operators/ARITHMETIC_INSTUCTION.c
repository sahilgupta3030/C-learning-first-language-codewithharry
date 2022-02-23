#include <stdio.h>
#include <math.h>
int main()
{
    float a = 4;
    float b = 8;

    float z = a * b; // -- this is Legal

    // float a * b = z; --> illegal

    printf("The value of a + b is %f \n", a + b);
    printf("The value of a - b is %f \n", a - b);
    printf("The value of a * b is %f \n", a * b);
    printf("The value of a / b is %f \n", a / b);

    printf("The vale of z is %f \n", z);

    printf("5 when divided by 2 leaves a remaiander of %d \n", 5 % 2);   // This is 'Modular Devisor Operator'
    printf("-5 when divided by 2 leaves a remaiander of %d \n", -5 % 2); // this is correct

    // printf("5 when divided by -2 leaves a remaiander of %d \n", 5 % -2);
    // --> this gives wrong Result.

    // No operator is assumed to be present.
    // printf("The vale of 4 * 5 is %d \n", (4)(5));  ---> will not return 20 -- Wrong.!
    printf("The vale of 4 * 5 is %d \n", 4 * 5);

    // There is no operator to perform exponentiation in C
    // printf("The value of 4 ^ 5 is %d \n", 4 ^ 5);  ---> will return 0 -- Wrong.!
    printf("The value of 4 ^ 5 is %f \n", pow(4, 5));

    return 0;
}