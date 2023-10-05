#include <stdio.h>

int main(){

    int principal, no_of_years;
    float simple_interest, rate_of_interest;

    principal = 355;
    no_of_years = 6;
    rate_of_interest = 6.53;

    simple_interest = principal * no_of_years * rate_of_interest;

    printf("Simple Interest: %f", simple_interest);

    return 0;
}