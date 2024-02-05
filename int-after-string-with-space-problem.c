#include <stdio.h>
int main()
{
    char s[30];
    fgets(s, 30, stdin);

    int n;
    scanf("%d", &n);

    printf("%s and %d\n", s, n);

    // issue found. fgets is capturing an extra '\n' (new line) which is coming from the "enter" button we are pressing at the time of giving input.
}