#include <stdio.h>

int main()
{
    int num, positive = 0, negative = 0, i;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter an integar number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }

    printf("\nPositive = %d", positive);
    printf("\nNegative = %d", negative);

    return 0;
}