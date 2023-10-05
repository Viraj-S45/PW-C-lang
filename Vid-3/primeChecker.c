#include <stdio.h>
int main()
{

    int n, i;

    printf("Number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not a Prime Number");
            break;
        }
        else
            printf("Not a Prime Number");
    }

    return 0;
}