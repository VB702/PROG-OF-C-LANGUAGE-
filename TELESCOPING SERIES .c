#include <stdio.h>

int main()
{
    int i;
    float sum = 0;

    for(i = 1; i <= 20; i++)
    {
        sum = sum + 1.0 / i;
    }

    printf("Sum = %.2f\n", sum);
    printf("Program Made by - Vinay Bhatt ");

    return 0;
}