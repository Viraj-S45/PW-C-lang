#include <stdio.h>

int main() {

/* Volume of a Sphere 4 / 3 pi r^3 */

    float volume, pi;
    pi = 3.14;
    int radius;
    printf("Radius:");
    scanf("%d",&radius);

    volume = (4 * pi * radius * radius * radius)/3;

    printf("Volume: %f",volume);
    return 0;
}
