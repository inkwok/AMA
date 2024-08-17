#include <stdio.h>

int
main(void)
{
    float amount;
    printf("Dollars and cents?: ");
    scanf("$%f", &amount);
    printf("Taxed: $%.2f\n", amount * 1.05f);
    return 0;
}