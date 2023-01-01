#include <stdio.h>

int main()
{
    int n1, n2, k;

    printf("Enter number one: ");
    scanf("%d", &n1);

    printf("Enter number two: ");
    scanf("%d", &n2);

    // to save the bigger number into k variable

    if (n1 > n2)
    {
        k = n1;
    }
    else
    {
        k = n2;
    }

again:
    if (k % n1 == 0 && k % n2 == 0)
    {
        printf("The LCD of %d and %d is %d", n1, n2, k);
    }
    else
    {
        k = k + 1;
        goto again;
    }

    return 0;
}