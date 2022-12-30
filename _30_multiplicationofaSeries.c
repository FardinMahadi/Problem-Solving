#include <stdio.h>

int main()
{
    int n, i, multiplication = 1;

    printf("\nNatural number: ");
    scanf("%d", &n);
    printf("\n\n");

    for (i = 1; i <= n; i++)
    {
        multiplication *= i;
        printf("%d*", i);
    }

    printf("\b = %d\n\n", multiplication);

    return 0;
}