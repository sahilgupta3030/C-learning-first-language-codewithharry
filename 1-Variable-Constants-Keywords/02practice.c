#include <stdio.h>
int main()
{

    float pi = 3.14;
    float radius;
    float ht;

    printf("Enter the radius \n");
    scanf("%f", &radius);

    printf("Enter the Height \n");
    scanf("%f", &ht);

    printf("Area of the given Circle is %f", pi * radius * radius * ht);
    return 0;
}