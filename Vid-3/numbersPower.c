#include <stdio.h>
int main()
{

    int a, b, exponent;

    printf("e: ");
    scanf("%d", &a);
    printf("x: ");
    scanf("%d", &b);

    exponent = 1;

    for (int i = 1; i <= b; i++)
    {
        exponent *= a;
    }

    printf("%d^%d = %d", a, b, exponent);

    return 0;
}