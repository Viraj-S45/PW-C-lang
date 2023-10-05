#include <stdio.h>
int main()
{

    int rows, cols;

    printf("Rows: ");
    scanf("%d", &rows);

    printf("Columns: ");
    scanf("%d", &cols);

    for (int j = 0; j < cols; j++)
    {
        for (int i = 1; i <= rows; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}