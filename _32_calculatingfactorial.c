#include <stdio.h>

int main()
{
    int n, i, multiplication = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        printf("%dx", i);
        multiplication *= i;
    }

    printf("\b = %d\n\n", multiplication);

    return 0;
}