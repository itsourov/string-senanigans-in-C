#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    char s[30];
    fgets(s, 30, stdin);

    printf("%s and %d\n", s, n);

    // disgusting issue found! after giving an integer input when we press enter,
    // the fgets() captures the button click and and things that is start and end of that string. so the final string becomes just a newline.
}