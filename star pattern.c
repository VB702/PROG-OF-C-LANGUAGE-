#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            switch(1)
            {
                case 1:
                    printf("* ");
                    break;
            }
        }

        printf("\n");
    }

    printf("Program Made By - Vinay Bhatt");

    return 0;
}