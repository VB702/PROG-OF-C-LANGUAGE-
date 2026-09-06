#include<stdio.h>

int main()
{
    int a, r, n, i;
    int sum = 0, t;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common ratio: ");
    scanf("%d", &r);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    t = a;

    for(i = 1; i <= n; i++)
    {
        sum = sum + t;
        t = t * r;
    }

    printf("Sum = %d\n", sum);
    printf("Made by - Vinay Bhatt");

    return 0;
}