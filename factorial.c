#include <stdio.h>

int main()
{
    int n, i, f = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        f = f * i;

    printf("Factorial = %d\n", f);
    printf("Program Made by - Vinay Bhatt");

    return 0;
}