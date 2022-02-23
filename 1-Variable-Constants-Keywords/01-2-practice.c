#include <stdio.h>
int main()
{
    int length, breadth;

    printf("What is the Length? \n");
    scanf("%d", &length);

    printf("What is the breadth? \n");
    scanf("%d", &breadth);

    printf("Your Area of the Rectangle is %d", length * breadth);
    return 0;
}