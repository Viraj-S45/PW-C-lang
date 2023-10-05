#include <stdio.h>

int main()
{
    int num, digit, sum;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++)
    {
        int originalNum = num;
        sum = 0;

        while (originalNum != 0)
        {
            digit = originalNum % 10;
            sum += digit * digit * digit;
            originalNum /= 10;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
