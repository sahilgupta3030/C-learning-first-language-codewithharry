#include <stdio.h>
int main()
{

    int n = 14, prime;
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 0)
    {
        printf("This is NOT prime number");
    }
    else
    {
        printf("This is a prime number");
    }

    return 0;
}