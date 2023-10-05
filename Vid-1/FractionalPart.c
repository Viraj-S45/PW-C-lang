#include <stdio.h>
int main()
{

    float number;
    int int_num;

    printf("Enter a decimal number: ");
    scanf("%f", &number);

    int_num = number;

    printf("Decimal Part: %f", number - int_num);

    return 0;
}