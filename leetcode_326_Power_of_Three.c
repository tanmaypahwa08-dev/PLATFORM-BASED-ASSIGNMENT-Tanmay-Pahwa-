#include <stdbool.h>

bool isPowerOfThree(int n) {
    /* 1162261467 = 3^19, the largest power of 3 that fits in a 32-bit int */
    return n > 0 && 1162261467 % n == 0;
}
