#include <stdio.h>

int main()
{
    // calculating odd and even numbers in a series

    int n, odd = 0, even = 0, i;

    printf("\nEnter an integer: ");
    scanf("%d", &n);

    //calculating even numbers
    printf("\nEven numbers...........\n");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d, ", i);
            even++;
        }
    }
    printf("\b");
    printf("\nTotal even numbers: %d", even);

    //calculating odd numbers
    printf("\n\nOdd numbers........\n");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d, ", i);
            odd++;
        }
    }
    printf("\b\b");
    printf("\nTotal odd numbers: %d\n\n", odd);

    return 0;
}