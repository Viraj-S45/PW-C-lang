#include <stdio.h>
int main()
{

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 4; i <= 3 * n + 1; i++)
    {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}