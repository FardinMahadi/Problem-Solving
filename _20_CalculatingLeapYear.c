#include <stdio.h>

int main()
{
    int year, c;

    printf("Enter the year: ");
    scanf("%d", &year);

    c=year % 4;

    if (c == 0)
    {
        printf("\nThis is a leap year.");
    }
    else
    {
        printf("\nThis is not a leap year.");
    }

    return 0;
}
