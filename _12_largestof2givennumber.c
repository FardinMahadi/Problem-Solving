#include <stdio.h>

int main()
{
    int a,b;
    printf("A: ");
    scanf("%d", &a);

    printf("\nB: ");
    scanf("%d", &b);

    if(a>b){
        printf("%d is the largest number.", a);
    }
    else{
        printf("%d is the largest number.", b);
    }

    return 0;
}
