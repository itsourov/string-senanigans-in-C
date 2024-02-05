#include <stdio.h>
int main()
{
    char s[10];
    scanf("%s", s);

    int n;
    scanf("%d", &n);

    printf("%s and %d\n", s, n);

    // no issue here, works as ecpected.
}