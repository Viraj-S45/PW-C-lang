#include <stdio.h>
int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 || num % 5 == 0)
    {
        printf("Entered no. is Divisible by 5 or 3");
    }
    else
    {
        printf("Entered no. is not Divisible by 5 and 3");
    }

    return 0;
}