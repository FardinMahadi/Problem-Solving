#include <stdio.h>

int main()
{
    int num, even = 0, odd = 0, i;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    printf("\nTotal even numbers: %d", even);
    printf("\nTotal odd numbers: %d", odd);

    return 0;
}