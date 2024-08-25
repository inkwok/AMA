#include <stdio.h>

struct 
Phone
{
    int AC, TP, LN;
};

int
main(void)
{
    struct Phone number;

    printf("Enter phone number: ");
    scanf("(%d) %d-%d", &number.AC, &number.TP, &number.LN);

    printf("You entered: %d.%d.%d\n", number.AC, number.TP, number.LN);
}