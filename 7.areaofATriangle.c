#include <stdio.h>
#include <math.h>

int main()
{
    float side, height, area;

    printf("Side: ");
    scanf("%f", &side);

    printf("Height: ");
    scanf("%f", &height);

    area = side * height * 0.5;
    printf("Area of the Triangle is: %.3f", area);

    return 0;
}