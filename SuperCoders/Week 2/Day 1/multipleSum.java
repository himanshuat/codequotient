class Result {
    static long multipleSum(int x) {
        long sum = 0L;
        for (int i = 1; i <= x; ++i) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }
        return sum;
    }
}