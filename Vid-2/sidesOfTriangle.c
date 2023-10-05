#include <stdio.h>
int main()
{

    int side_1, side_2, side_3;

    printf("Side 1: ");
    scanf("%d", &side_1);
    printf("Side 2: ");
    scanf("%d", &side_2);
    printf("Side 3: ");
    scanf("%d", &side_3);

    if ((side_1 + side_2) > side_3 || (side_1 + side_3 > side_2) || (side_2 + side_3) > side_1)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Not a Valid Traingle");
    }

    return 0;
}