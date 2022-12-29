#include <stdio.h>

int main()
{
    int n, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    remainder = n % 2;

    if (remainder == 0)
    {
        printf("\n%d is an even number.", n);
    }
    else
    {
        printf("\n%d is an odd number.", n);
    }

    return 0;
}
