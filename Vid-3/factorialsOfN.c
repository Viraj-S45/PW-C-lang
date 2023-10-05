#include <stdio.h>
int main()
{

    int n, factorial;

    printf("n: ");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        factorial = 1;

        for (int i = 1; i <= j; i++)
        {
            factorial *= i;
        }

        printf("%d\n", factorial);
    }

    return 0;
}