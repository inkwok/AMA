#include <stdio.h>


double
function(double x)
{
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}

double
modified_function(double x)
{
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}

int
main(void)
{
    double x;
    printf("X?: ");
    scanf("%lf", &x);

    printf("Brute returns: %.4f\n", function(x));
    printf("Horner returns: %.4f\n", modified_function(x));

    return 0;
}