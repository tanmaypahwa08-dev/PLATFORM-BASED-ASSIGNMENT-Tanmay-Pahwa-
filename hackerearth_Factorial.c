#include <stdio.h>

int main(void) {
    int n;
    unsigned long long fact = 1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
        fact *= i;

    printf("%llu\n", fact);
    return 0;
}
