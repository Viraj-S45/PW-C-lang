#include <stdio.h>
int main()
{

    int sum, n;

    sum = 0;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    printf("Sum: %d", sum);

    return 0;
}