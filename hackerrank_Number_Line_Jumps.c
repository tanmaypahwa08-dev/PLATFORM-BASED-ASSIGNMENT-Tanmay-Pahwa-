char* kangaroo(int x1, int v1, int x2, int v2) {
    if (x1 == x2)
        return "YES";
    if (v1 == v2)
        return "NO";
    /* x1 + v1*t == x2 + v2*t  ->  t = (x2 - x1) / (v1 - v2) must be a non-negative integer */
    int diff = x2 - x1;
    int speed = v1 - v2;
    if (diff % speed == 0 && diff / speed > 0)
        return "YES";
    return "NO";
}
