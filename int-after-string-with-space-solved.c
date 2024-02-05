#include <stdio.h>
#include <string.h>
int main()
{
    char s[30];
    fgets(s, 30, stdin);

    s[strlen(s) - 1] = '\0';

    int n;
    scanf("%d", &n);

    printf("%s and %d\n", s, n);

    // we are replacing the ending newline with a null charecter
}