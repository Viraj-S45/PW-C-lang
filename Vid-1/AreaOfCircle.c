#include <stdio.h>

int main(){

    float radius, pi, area;

    pi = 3.14;

    printf("Radius: ");
    scanf("%f",&radius);

    area = 2 * pi * radius;

    printf("Area: %f",area);

    return 0;
}