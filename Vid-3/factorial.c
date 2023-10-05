#include <stdio.h>
int main()
{

    int n, factorial;
    factorial = 1;

    printf("n: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }

    printf("Factorial: %d", factorial);

    return 0;
}