#include <stdio.h>

int main()
{
    int i, factorial = 1;

    printf("\n\n");
    
    for (i = 1; i <= 5; i++)
    {
        printf("%dX", i);
        factorial = factorial * i;
    }

    printf("\b = %d\n\n", factorial);

    return 0;
}
