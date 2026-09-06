#include <stdio.h>

int main()
{
    int a = 1, b = 1, c, n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for(i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\nProgram Made by - Vinay Bhatt ");

    return 0;
}