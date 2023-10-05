#include <stdio.h>
int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Absolute Value: %d", num);
    }
    else
    {
        num *= -1;
        printf("Absolute Value: %d", num);
    }

    return 0;
}