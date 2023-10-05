#include <stdio.h>
int main()
{

    int number, modulo;

    printf("Num: ");
    scanf("%d", &number);

    printf("Reverse: ");

    while (number != 0)
    {
        modulo = number % 10;
        printf("%d", modulo);
        number -= modulo;
        number /= 10;
    }

    return 0;
}