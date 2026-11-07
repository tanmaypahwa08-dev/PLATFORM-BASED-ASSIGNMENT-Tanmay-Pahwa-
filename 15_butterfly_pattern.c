#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int half = (n + 1) / 2;   /* rows in the upper half, including the widest row */

    for (int i = 1; i <= n; i++) {
        /* wing size grows to 'half' then shrinks again */
        int wing = (i <= half) ? i : n - i + 1;
        int gap = 2 * (half - wing) + 1;

        for (int j = 1; j <= wing; j++)
            printf("*");
        for (int j = 1; j <= gap; j++)
            printf(" ");
        for (int j = 1; j <= wing; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
