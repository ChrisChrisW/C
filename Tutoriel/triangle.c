#include <stdio.h>

int main(void)
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        int t = (2 * (n - i)) - 1;
        for (int j = 0; j < t; j++)
        {
            if (i == 0 || j == 0 || j == (t - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
