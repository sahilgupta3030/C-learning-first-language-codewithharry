#include <stdio.h>
int main()
{

    // char ptr[] = "Rohit Sharma"; ///// will not allow RE initialization 
    char *ptr = "Rohit Sharma";

    // above are the "2" methods to Generate STRINGS

    ptr = "Virat Kohli";

    printf("%s", ptr);

    return 0;
}