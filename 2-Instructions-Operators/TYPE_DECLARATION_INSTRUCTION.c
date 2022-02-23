#include <stdio.h>
int main()
{
    int a = 6, b, c;
    b = c = a;

    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);
    printf("The value of c is %d \n", c);

    //  float a = 2;
    //  float b = a + 1.1;
    //  printf("The value of a + b is %f", a +b); --> This Works.!

    //  float b = a + 1.1;
    //  float a = 2;
    //  printf("The value of a + b is %f", a +b);
    // --> this won't work beacuse the compiler reads it line by line ,
    //  this means if not specified erlier it will throw error.

    return 0;
}