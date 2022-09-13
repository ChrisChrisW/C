#include <stdio.h>
//#include <string.h>

void afficher_for(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }
}

void afficher_while(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        printf("%c\n", s[i]);
        i++;
    }
}

int main(void)
{
    afficher_for("wow");
    printf("\n");
    afficher_while("palindrome");
    printf("\n");

    return 0;
}
