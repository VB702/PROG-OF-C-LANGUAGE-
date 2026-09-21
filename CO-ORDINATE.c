#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0)
        printf("First Quadrant\n");

    else if(x < 0 && y > 0)
        printf("Second Quadrant\n");

    else if(x < 0 && y < 0)
        printf("Third Quadrant\n");

    else if(x > 0 && y < 0)
        printf("Fourth Quadrant\n");

    else
        printf("Point lies on the axis\n");

    printf("Program Made By - Vinay Bhatt");

    return 0;
}