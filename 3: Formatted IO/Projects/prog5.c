#include <stdio.h>

struct Check
{
    int rows;
    int cols;
    int diag;
};

void
sum(const int nums[16])
{
    int d1, d2;
    d1 = nums[0]  + nums[5]  + nums[10] + nums[15];
    d2 = nums[3]  + nums[6]  + nums[9]  + nums[12];
    printf("Diagonal sums: %d %d\n", d1, d2);

    int r1, r2, r3, r4;
    r1 = nums[0]  + nums[1]  + nums[2]  + nums[3];
    r2 = nums[4]  + nums[5]  + nums[6]  + nums[7];
    r3 = nums[8]  + nums[9]  + nums[10] + nums[11];
    r4 = nums[12] + nums[13] + nums[14] + nums[15];
    printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);

    int c1, c2 ,c3, c4;
    c1 = nums[0]  + nums[4]  + nums[8]  + nums[12];
    c2 = nums[1]  + nums[5]  + nums[9]  + nums[13];
    c3 = nums[2]  + nums[6]  + nums[10] + nums[14];
    c4 = nums[3]  + nums[7]  + nums[11] + nums[15];
    printf("Column sums: %d %d %d %d\n", c1, c2, c3, c4);
}

int 
main(void)
{
    int nums[16];

    printf("Enter the numbers from 1 to 16 in any order: ");
    for(int i = 0; i <= 15; i++)
    {
        scanf("%d", &nums[i]);
        if(nums[i] > 16 || nums[i] < 1) return 0;
    }

    printf("Given square: \n");
    for(int i = 0; i <= 15; i++)
    {
        printf("%3d", nums[i]);
        if(i == 3 || i == 7 || i == 11 || i == 15)
        {
            printf("\n");
        }
    }

    sum(nums);
    
    return 0;
}