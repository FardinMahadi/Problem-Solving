#include <stdio.h>

int main()
{
    int f, c;
    printf("Enter the fahrenheit temparature: ");
    scanf("%d", &f);

    c = ((f - 32) * 5) / 9;
    printf("Temparature in celsius: %d", c);

    return 0;
}
