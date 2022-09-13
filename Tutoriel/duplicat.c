#include <stdio.h>

void str(char c, char s, char t)
{
    c = s + t;
}

void str2(char c, char s, int n)
{
    for (int i = 0; i < n; i++)
    {
        c += s;
    }
}