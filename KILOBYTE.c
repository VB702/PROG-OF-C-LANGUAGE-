#include <stdio.h>

int main()
{
    float bytes, kilobytes;

    printf("Enter bytes: ");
    scanf("%f", &bytes);

    kilobytes = bytes / 1024;

    printf("Kilobytes = %.2f\n", kilobytes);

    printf("Program Made By - Vinay Bhatt");

    return 0;
}