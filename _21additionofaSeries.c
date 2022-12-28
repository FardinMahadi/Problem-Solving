#include <stdio.h>

int main()
{
    // calculate this series (1+2+3+..+n)

    int n, i, sum = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        printf(" %d +", i);
        sum += i;
    }

    printf("\b = %d", sum);

    return 0;
}