#include <stdio.h>

long int prime_factors(long int n)
{
    long int f = 2, lf = 1;
    while (n > 1)
    {
        while (n % f == 0)
        {
            lf = f;
            n /= f;
        }
        f++;
    }
    return lf;
}

int main()
{
     printf("last factor: %li\n", prime_factors(600851475143));
}
