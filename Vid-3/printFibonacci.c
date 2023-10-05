#include <stdio.h>
int main()
{

    int a, b, sum, n;

    printf("N: ");
    scanf("%d", &n);

    a = 1;
    b = 1;

    printf("Fibonacci Number: \n");
    printf("    The 1 number is %d \n", a);
    printf("    The 2 number is %d \n", b);

    for (int i = 3; i <= n; i++)
    {

        sum = a + b;
        printf("    The %d number is %d \n", i, sum);
        a = b;
        b = sum;
    }

    return 0;
}