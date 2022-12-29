#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",a);

    if(a>0)
    {
        printf("%d is a positive number.",a);
    }
    else if (a<0)
    {
        printf("%d is a positive number.",a);
    }
    else{
        printf("This number is zero.");
    }
    

    return 0;
}
