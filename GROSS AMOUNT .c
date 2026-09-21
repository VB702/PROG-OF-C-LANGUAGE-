#include <stdio.h>

int main()
{
    float basic, hra, da, gross;
    int choice;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if(basic <= 10000)
        choice = 1;
    else if(basic <= 20000)
        choice = 2;
    else
        choice = 3;

    switch(choice)
    {
        case 1:
            hra = basic * 20 / 100;
            da = basic * 80 / 100;
            break;

        case 2:
            hra = basic * 25 / 100;
            da = basic * 90 / 100;
            break;

        case 3:
            hra = basic * 30 / 100;
            da = basic * 95 / 100;
            break;
    }

    gross = basic + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA  = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    printf("Program Made By - Vinay Bhatt");

    return 0;
}