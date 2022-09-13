#include <stdio.h>

int main(void)
{
    int n = 4;

    for (int i = 1; i < (n + 1); i++)
    {
        int t = (2 * i) - 1;
        for (int j = 0; j < (n - i); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < t; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 1; i < n; i++)
    {
        int t = (2 * (n - i)) - 1;

        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < t; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
