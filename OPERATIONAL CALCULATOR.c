#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            printf("Result = %.2f\n", a / b);
            break;

        default:
            printf("Invalid operation\n");
    }

    printf("Program Made By - Vinay Bhatt");

    return 0;
}