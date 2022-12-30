#include <stdio.h>
#include <math.h>

int main()
{
    // addition of this series
    //  1^1 + 2^2 + 3^3 + .... + n^n

    int n, i, a, element = 1, sum = 0;

    printf("\nEnter an integer number: ");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        printf("%d^%d + ", a, a);
        element = pow(a, a);
        sum += element;
    }

    printf("\b\b= %d\n\n", sum);

    return 0;
}