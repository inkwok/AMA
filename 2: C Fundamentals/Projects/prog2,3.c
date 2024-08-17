#include <stdio.h>


#define PI 3.1415926f

double
volume(int radius)
{
    return radius * radius * radius * PI * 4 / 3;
}

int
main(void)
{
    int radius;
    printf("Radius?: ");
    scanf("%d", &radius);
    printf("Volume: %lf\n", volume(radius));
    return 0;
}