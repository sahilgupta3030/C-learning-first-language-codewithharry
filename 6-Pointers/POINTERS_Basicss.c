#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("The value of is %d\n", i);
    printf("The value of is %d\n", *j);
    printf("The address of is %u\n", &i);
    printf("The value of is %u\n", j);
    
    printf("The value of is %d\n", &j);
    printf("The value of is %d\n", *(&j));

    return 0;
}