#include <stdio.h>

int main()
{
    char lowerchar, upperchar;
    int ascii;

    // ASCII values of A-Z (uppercase alphabets) are 65-90
    // And ASCII values of a-z (lowercase alphabets) are 97-122

    printf("\nEnter an uppercase character: ");
    scanf("%c", &upperchar);

    ascii = upperchar;
    lowerchar = ascii + 32;

    while (upperchar < 65 || upperchar > 90)
    {
        printf("\nPlease enter a valid uppercase character: ");
        scanf("%c", &upperchar);

        ascii = upperchar;
        lowerchar = ascii + 32;
    }

    printf("\nThe lowercase character is: %c\n", lowerchar);

    return 0;
}
