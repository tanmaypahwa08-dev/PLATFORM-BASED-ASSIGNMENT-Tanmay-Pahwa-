int countOdds(int low, int high) {
    /* odd numbers in [1, x] = (x + 1) / 2 */
    return (high + 1) / 2 - low / 2;
}
