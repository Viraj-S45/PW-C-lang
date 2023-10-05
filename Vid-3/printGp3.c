#include <stdio.h>
int main()
{

    int n;

    printf("Enter a number n: ");
    scanf("%d", &n);

    float gp = 100;

    for (int i = 0; i < n; i++)
    {
        printf("%f ", gp);
        gp /= 2;
    }

    return 0;
}