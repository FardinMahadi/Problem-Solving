#include <stdio.h>

int main()
{
    int a, b, min, gcd;

    printf("Enter number one: ");
    scanf("%d", &a);

    printf("Enter number two: ");
    scanf("%d", &b);

    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    for (min >= 1; min--;)
    {
        if (a % min == 0 && b % min == 0)
        {
            gcd = min;
            break;
        }
    }

    printf("GCD is %d\n", gcd);

    return 0;
}
