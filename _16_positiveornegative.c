#include <stdio.h>

int main()
{
    int a;

    printf("A: ");
    scanf("%d",a);

    if(a>0)
    {
        printf("This number is positive:)");
    }
    else
    {
        printf("This number is negative:)");
    }

    return 0;
}
