#include <stdio.h>

void display(); // Function Prototype

int main()
{
    printf("Initial Line of the Program\n");
    display(); // Function Call
    printf("Program Finished here\n");
    return 0;
}

void display() // Function Difinition
{
    printf("This Is Apple\n");
}