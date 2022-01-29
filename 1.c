#include <stdio.h>

int multiples_of_3_or_5(int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    printf("the sum of all multiples of 3 or 5 below 1000 is %d\n", multiples_of_3_or_5(1000));
}
