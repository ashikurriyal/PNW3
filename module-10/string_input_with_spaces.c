#include <stdio.h>

int main()
{
    char s[50];
    // gets(s);
    fgets(s, 15, stdin);
    printf("%s\n", s);

    char d[30] = "Tanvir Ahmed";
    printf("%s", d);
    return 0;
}