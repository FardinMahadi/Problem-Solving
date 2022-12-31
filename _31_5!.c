#include <stdio.h>

int main()
{
    int i, factorial;

    printf("\n\n");
    
    for (i = 1; i <= 5; i++)
    {
        printf("%dX", i);
        factorial = 1 * i;
    }

    printf("\b = %d\n\n", factorial);

    return 0;
}