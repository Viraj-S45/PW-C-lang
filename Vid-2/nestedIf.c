#include <stdio.h>
int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        if (num % 3 == 0)
        {
            printf("Divisible by 5 and 3");
        }
    }
    else
    {
        printf("Not Divisible by 5 and 3");
    }

    return 0;
}