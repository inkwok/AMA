#include <stdio.h>

struct Bills
{
    int washingtons;
    int lincolns;
    int hamiltons;
    int jacksons;
};

struct Bills
countMoney(int dollars)
{
    struct Bills money = {0};

    while(20 <= dollars)
    {
        money.jacksons++;
        dollars -= 20;
    }

    while(10 <= dollars)
    {
        money.hamiltons++;
        dollars -= 10;
    }

    while(5 <= dollars)
    {
        money.lincolns++;
        dollars -= 5;
    }

    while(1 <= dollars)
    {
        money.washingtons++;
        dollars--;
    }
    return money;
}

int
main(void)
{
    int dollars;
    printf("Cash: ");
    scanf("%d", &dollars);

    struct Bills bills = countMoney(dollars);

    printf("$20: %d\n", bills.jacksons);
    printf("$10: %d\n", bills.hamiltons);
    printf(" $5: %d\n", bills.lincolns);
    printf(" $1: %d\n", bills.washingtons);

    return 0;
}