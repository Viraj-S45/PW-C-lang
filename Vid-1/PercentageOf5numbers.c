#include <stdio.h>
int main(){

    int sub1, sub2, sub3, sub4, sub5;
    float percentage;

    sub1 = 90;
    sub2 = 67;
    sub3 = 40;
    sub4 = 16;
    sub5 = 99;

    percentage = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    printf("Percentage: %f",percentage);

    return 0;
}