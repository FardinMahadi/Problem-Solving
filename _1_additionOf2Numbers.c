#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, result;
    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    result = x + y;
    printf("\nThe result of the addition is: %d", result);

    return 0;
}
