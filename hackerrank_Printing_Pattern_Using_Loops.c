#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            /* distance from the nearest edge */
            int top = i, bottom = size - 1 - i;
            int left = j, right = size - 1 - j;
            int edge = top;
            if (bottom < edge) edge = bottom;
            if (left < edge) edge = left;
            if (right < edge) edge = right;

            printf("%d", n - edge);
            if (j < size - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
