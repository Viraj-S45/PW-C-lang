#include <stdio.h>
int main()
{

    int percentage;

    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    if (percentage > 91)
    {
        printf("Excellent");
    }
    else if (percentage > 81)
    {
        printf("Very Good");
    }
    else if (percentage > 71)
    {
        printf("Good");
    }
    else if (percentage > 61)
    {
        printf("Can Do Better");
    }
    else if (percentage > 51)
    {
        printf("Average");
    }
    else if (percentage > 41)
    {
        printf("Below Average");
    }
    else
        printf("Fail");
    return 0;
}