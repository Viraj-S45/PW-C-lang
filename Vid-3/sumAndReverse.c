#include <stdio.h>
int main()
{

    int number, modulo, r, sum;

    printf("Num: ");
    scanf("%d", &number);

    sum = number;

    while (number != 0)
    {
        modulo = number % 10;
        r += modulo;
        r *= 10;
        number -= modulo;
        number /= 10;
    }

    r /= 10;

    sum += r;

    printf("Sum: %d", sum);

    return 0;
}