#include <stdio.h>
int main()
{

    int n;

    printf("N: ");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j * 2; i += 2)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}