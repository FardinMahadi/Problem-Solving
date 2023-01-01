#include <stdio.h>

int main()
{
    int n, i, mark = 0;

    printf("Enter a number to check whether it is prime or not: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    // change mark to 1 for non-prime number
    if (n == 0 || n == 1)
    {
        mark = 1;
    }

    // if n is divisible by i, then n is not prime
    // change mark to 1 for non-prime number
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            mark = 1;
            break;
        }
    }

    if (mark == 0)
    {
        printf("%d is a prime number:)", n);
    }
    else
    {
        printf("%d is not a prime number -_-", n);
    }

    return 0;
}