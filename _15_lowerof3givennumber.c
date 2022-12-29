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

    if(a<b && a<c)
    {
        printf("%d is the lowest number.", a);
    }
    else if (a>b && b<c)
    {
        printf("%d is the lowest number.", b);
    }
    else
    {
        printf("%d is the lowest number.", c);
    }
    
    
    return 0;
}
