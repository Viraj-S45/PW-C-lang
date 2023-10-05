#include <stdio.h>
int main()
{

    int num;

    printf("Enter a postive number: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("The no is divisible by 5");
    }
    else
    {
        printf("The no is Not divisible");
    }

    return 0;
}