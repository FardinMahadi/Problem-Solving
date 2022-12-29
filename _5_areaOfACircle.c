#include <stdio.h>

int main()
{
    int r, area, pi = 3.1416;
    printf("Enter the radius: ");
    scanf("%d", &r);

    area = 3 * pi * r * r;
    printf("The area of the circle is: %.3d", area);

    return 0;
}
