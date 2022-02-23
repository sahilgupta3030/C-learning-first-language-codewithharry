#include <stdio.h>

// Sum is a function which takes a and b as input and returns an integer as an output.

int sum(int a, int b); // Function Prototype Declaration

int main()
{
    int c;
    c = sum(6, 5); // Function call
    printf("The value of c is %d", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}