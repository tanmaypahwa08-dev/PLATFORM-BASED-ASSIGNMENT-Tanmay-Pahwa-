#include <stdio.h>

int main(void) {
    int a, b;
    const char *words[] = {"zero", "one", "two", "three", "four",
                           "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);

    for (int n = a; n <= b; n++) {
        if (n <= 9)
            printf("%s\n", words[n]);
        else if (n % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
