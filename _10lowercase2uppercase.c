#include <stdio.h>
#include <conio.h>

int main()
{
    char lowerchar, upperchar;
    int ascii;

    // ASCII values of A-Z (uppercase alphabets) are 65-90
    // And ASCII values of a-z (lowercase alphabets) are 97-122

    printf("\nEnter a character: ");
    scanf("%c", &lowerchar);

    ascii = lowerchar;
    upperchar = ascii - 32;

    while (lowerchar < 97 || lowerchar > 122)
    {
        if (lowerchar < 97 || lowerchar > 122)
        {
            printf("\nPlease enter a valid lowercase character: ");
            scanf("%c", &lowerchar);

            ascii = lowerchar;
            upperchar = ascii - 32;
        }
    }

    printf("\nThe uppercase is: %c\n", upperchar);

    return 0;
}