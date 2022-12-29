#include <stdio.h>

int main()
{
    // addition of this series
    // 1*1 + 3*3 + 5*5 + ... + n*n

    int n, i, sum = 0, multiplication;

    printf("Enter n value: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
            //to skip this numbers
        }
        else
        {
            printf(" %d^2 +", i);

            multiplication = i * i;
            sum += multiplication;
        }
    }

    printf("\b = %d", sum);

    return 0;
}