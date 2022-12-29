#include <stdio.h>
#include <math.h>

int main()
{
    double side, area;
    printf("Enter the length of a side: ");
    scanf("%lf", &side);

    area = (sqrt(3) / 4) * (side * side);
    printf("The area of equilateral triangle is: %.4lf", area);

    return 0;
}
