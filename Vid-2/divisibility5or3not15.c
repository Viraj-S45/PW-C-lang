#include <stdio.h>
int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 || num % 3 == 0)
    {
        if (num % 15 != 0)
        {
            printf("The number is not divisible by 15 and is divisible by 5 or 3");
        }
        else
        {
            printf("The number doesn't satisfy the condition");
        }
    }
    else
    {
        printf("The number doesn't satisfy the condition");
    }

    return 0;
}