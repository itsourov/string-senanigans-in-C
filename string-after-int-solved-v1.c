#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);

    char temp;
    scanf("%c", &temp);

    char s[30];
    fgets(s, 30, stdin);

    s[strlen(s) - 1] = '\0';

    printf("%s and %d\n", s, n);
}