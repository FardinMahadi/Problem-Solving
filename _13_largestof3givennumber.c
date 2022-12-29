#include <stdio.h>

int main()
{
    int a, b, c;

    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    printf("C: ");
    scanf("%d", &c);

    if(a>b && a>c)
    {
        printf("%d is the largest number.", a);
    }
    else if (a<b && b>c)
    {
        printf("%d is the largest number.", b);
    }
    else
    {
        printf("%d is the largest number.", c);
    }
    
    
    return 0;
}
