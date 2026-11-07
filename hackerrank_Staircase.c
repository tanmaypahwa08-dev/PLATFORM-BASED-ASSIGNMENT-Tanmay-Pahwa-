#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++)
            printf(" ");
        for (int h = 0; h < i; h++)
            printf("#");
        printf("\n");
    }
    return 0;
}
