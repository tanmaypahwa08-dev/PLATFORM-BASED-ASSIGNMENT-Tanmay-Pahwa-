#include <stdio.h>

int main(void) {
    int n;
    char s[1001];

    scanf("%d", &n);
    scanf(" %1000[^\n]", s);

    printf("%d\n", n * 2);
    printf("%s\n", s);
    return 0;
}
