#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char p = '500';

    if (isdigit(p))
    {
        printf("chiffre");
    }
    else
    {
        printf("autre");
    }

    return 0;
}
