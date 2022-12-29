#include <stdio.h>

int main()
{
    // addition of ten numbers after
    
    int a, n, i, sum = 0;

    printf("Enter your number: ");
    scanf("%d", &a);

    n = a + 10;
    for (i = a; i < n; i++)
    {
        printf(" %d +", i);
        sum += i;
    }

    printf("\b = %d", sum);

    return 0;
}