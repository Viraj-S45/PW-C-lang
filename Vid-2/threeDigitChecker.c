#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 99 && num < 1000)
    {
        printf("Three Digit Number");
    }
    else
    {
        printf("Not a three digit number");
    }

    return 0;
}