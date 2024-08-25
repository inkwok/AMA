#include <stdio.h>

struct Item
{
    int no;
    float price;
    int dd, mm, yyyy;
};

int 
main(void)
{
    struct Item item;

    printf("Enter item number: ");
    scanf("%d", &item.no);

    printf("Enter unit price: ");
    scanf("%f", &item.price);

    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &item.mm, &item.dd, &item.yyyy);

    if(item.price < 10000.0f)
    {
        printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
        printf("%d\t\t$%7.2f\t%d/%d/%d\n", item.no, item.price, item.mm, item.dd, item.yyyy);
    }

    return 0;
}