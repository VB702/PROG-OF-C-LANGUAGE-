#include <stdio.h>

int main()
{
    int n, a, c;

    printf("Enter a three digit number: ");
    scanf("%d", &n);

    a = n / 100;
    c = n % 10;

    if(a == c)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    printf("Program Made By - Vinay Bhatt");

    return 0;
}
