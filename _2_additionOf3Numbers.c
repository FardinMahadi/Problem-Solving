#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z, result;
    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    printf("Z: ");
    scanf("%d", &z);

    result = x + y + z;
    printf("\nThe result of the addition is: %d", result);

    return 0;
}
