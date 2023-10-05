#include <stdio.h>
int main()
{

    int a, b, sum, n;

    printf("N: ");
    scanf("%d", &n);

    a = 1;
    b = 1;

    for (int i = 3; i <= n; i++)
    {

        sum = a + b;
        if (i == n)
        {
            printf("The %dth fibonacci number is %d \n", n, sum);
        }

        a = b;
        b = sum;
    }

    return 0;
}