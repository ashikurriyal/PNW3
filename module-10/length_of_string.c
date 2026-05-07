#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    scanf("%s", c);
    // int count = 0;
    // for(int i = 0; c[i] != '\0'; i++)
    // {
    //     count++;
    // }

    int size = strlen(c);
    printf("%d", size);
    return 0;
}