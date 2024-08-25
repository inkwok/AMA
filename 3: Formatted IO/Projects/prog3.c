#include <stdio.h>

struct 
ISBN
{
    int GS1;
    int GID;
    int PC;
    int NUM;
    int CHK;
};

int 
main(void)
{
    struct ISBN book;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &book.GS1, &book.GID, &book.PC, &book.NUM, &book.CHK);
    
    printf("GS1 prefix: %d\n", book.GS1);
    printf("Group identifier: %d\n", book.GID);
    printf("Publisher code: %d\n", book.PC);
    printf("Item number: %d\n", book.NUM);
    printf("Check digit: %d\n", book.CHK);

    return 0;
}