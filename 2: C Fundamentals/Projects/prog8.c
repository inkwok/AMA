#include <stdio.h>

int
main(void)
{
    double principal, rate, payment;

    printf("\nEnter amount of loan: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate: ");
    scanf("%lf", &rate);
    rate /= 12;

    printf("Enter min. monthly payment: ");
    scanf("%lf", &payment);

    double balance = principal;

    for(int i = 1; i <= 3; i++)
    {
        double interest = rate * balance;
        balance += interest;
        balance -= payment;
        printf("After payment %d: %.2f\n", i, balance);
    }
    return 0;
}