#include <stdio.h>

int main()
{
    int c, f;

    printf("Enter temparature in celsius scale: ");
    scanf("%d", &c);

    f = ((c * 9) / 5) + 32;
    printf("Temperature in fahrenheit: %3d", f);

    return 0;
}
