#include <stdio.h>
int main()
{

    int number, sum, modulo;

    sum = 0;

    printf("Num: ");
    scanf("%d", &number);

    while (number != 0)
    {
        modulo = number % 10;
        sum += modulo;
        number -= modulo;
        number /= 10;
    }

    printf("Sum of Digits: %d", sum);

    return 0;
}