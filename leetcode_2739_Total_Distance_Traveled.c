int distanceTraveled(int mainTank, int additionalTank) {
    int distance = 0;
    while (mainTank > 0) {
        if (mainTank >= 5 && additionalTank > 0) {
            distance += 50;          /* 5 litres used */
            mainTank -= 4;           /* 5 used, 1 transferred in */
            additionalTank--;
        } else {
            distance += mainTank * 10;
            mainTank = 0;
        }
    }
    return distance;
}
