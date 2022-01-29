#include <stdio.h>

int fib(int n)
{
    if (n < 2)
        return 1;

    if (n < 3)
        return 2;

    return fib(n - 1) + fib(n - 2);
}

int even_fib_numbers(int n)
{
    int v, i, sum;
    while (v < n)
    {
        v = fib(i);
        if (v % 2 == 0)
            sum += v;
        i++;
    }
    return sum;
}

int main()
{
    printf("sum of even fib numbers below 4 million: %d\n", even_fib_numbers(4000000));
}
