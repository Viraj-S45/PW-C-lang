#include <stdio.h>
int main()
{

    int number, count;

    count = 0;

    printf("Num: ");
    scanf("%d", &number);

    while (number != 0)
    {
        number /= 10;
        count++;
    }

    printf("Digits: %d", count);

    return 0;
}