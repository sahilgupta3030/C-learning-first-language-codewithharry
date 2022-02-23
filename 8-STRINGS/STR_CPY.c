#include <stdio.h>
#include <string.h>

int main()
{

    char *ptr = "--yaha ki value--";
    char ptr2[45];

    strcpy(ptr2, ptr);

    printf("SEE THIS %s\n", ptr2);

    return 0;
}