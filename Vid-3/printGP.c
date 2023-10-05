#include <stdio.h>
int main()
{

    int n, gp;

    printf("Enter a number n: ");
    scanf("%d", &n);

    gp = 1;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", gp);
        gp *= 2;
    }

    return 0;
}