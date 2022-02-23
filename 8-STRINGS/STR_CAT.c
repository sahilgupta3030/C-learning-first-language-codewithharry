#include <stdio.h>
#include <string.h>

int main()
{

    char first[44] = "Bhoot";
    char *second = "Nath";

    strcat(first, second);

    printf("Word now becomes : %s\n", first);

    return 0;
}