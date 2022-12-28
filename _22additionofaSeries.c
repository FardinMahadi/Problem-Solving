#include <stdio.h>

int main()
{
    // calculate this series (1+3+5+7+..+n)

    int n, i, sum = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            printf(" %d +", i);
            sum += i;
        }
    }

    printf("\b = %d", sum);

    return 0;
}