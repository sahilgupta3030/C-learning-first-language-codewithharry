#include <stdio.h>
int main()
{
    // char str[]="SAHILL";
    // char str[]={'S','A','H','I','L','L','\0'};

    char str[] = "SAHILL \n";

    char *ptr = str;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}