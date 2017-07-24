#include <stdio.h>

int main(void)
{
    char a[10];
    int c;
    int i;
    int n;
    for (i = 0; i < sizeof(a) && (c=getchar()) != EOF && c != '\n';)
        a[i++] = c;
    n = i;
    for (i = 0; i < n; i++)
        printf("%c", a[i]);
    putchar('\n');
    return 0;
}
