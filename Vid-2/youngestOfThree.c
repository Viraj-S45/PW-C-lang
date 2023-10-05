#include <stdio.h>
int main()
{

    int age_ram, age_shyam, age_ajay;

    printf("Enter Ram's Age: ");
    scanf("%d", &age_ram);
    printf("Enter Shyam's Age: ");
    scanf("%d", &age_shyam);
    printf("Enter Ajay's Age: ");
    scanf("%d", &age_ajay);

    if (age_ajay < age_ram && age_ajay < age_shyam)
    {
        printf("Ajay is yougest");
    }
    else if (age_ram < age_ajay && age_ram < age_shyam)
    {
        printf("Ram is youngest");
    }
    else
    {
        printf("Shayam is youngest");
    }

    return 0;
}