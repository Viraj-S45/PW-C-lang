#include <stdio.h>
int main(){

    int a, b;

    printf("Num 1: ");
    scanf("%d", &a);
    printf("Num 2: ");
    scanf("%d", &b);

    int remainder = a % b;

    printf("Remainder: %d",remainder);

        return 0;
}