#include <stdio.h>
int main()
{

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}