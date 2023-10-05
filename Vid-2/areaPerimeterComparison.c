#include <stdio.h>
int main()
{

    int length, breadth, area, perimeter;

    printf("Length of Rectangle: ");
    scanf("%d", &length);
    printf("Breadth of Rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        printf("Area is greater than Perimeter");
    }
    else
    {
        printf("Perimeter is greater than Area");
    }

    return 0;
}