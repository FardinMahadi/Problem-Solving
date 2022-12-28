#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, prearea, area;

    printf("\nEnter side a: ");
    scanf("%f", &a);

    printf("Enter side b: ");
    scanf("%f", &b);

    printf("Enter side c: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    prearea = s * (s - a) * (s - b) * (s - c);

    //sqrt to get the value of square root of prearea
    area = sqrt(prearea);


    printf("The area fo the Isoscales Triangle is: %f", area);

    return 0;
}