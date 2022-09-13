#include <stdio.h>
#include <string.h>

int palindrome(char *s)
{
    int max = strlen(s);

    for (int i = 0; i < max; i++)
    {
        if (s[i] != s[max - i - 1])
        {
            printf("1 => %c != %c\n", s[i], s[max - i - 1]);
            return 1;
        }
    }

    printf("0\n");
    return 0;
}

int becomePalindrome(char *s, char *p)
{
    p = s; // default
    int max = strlen(s);
    int inverse;

    for (int i = 0; i < max; i++)
    {
        inverse = max - i - 1;

        if (s[i] != s[inverse])
        {
            p[i] == s[i];
            p[inverse] == p[i];
        }
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    // palindrome("kayak");
    // palindrome("bonjour");
    char s = "bonjour";
    char p = "";
    becomePalindrome(s, p);

    printf("%s == %s", s, p);

    return 0;
}
