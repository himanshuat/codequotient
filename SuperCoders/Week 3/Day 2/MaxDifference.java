class Result {
    static int maxDifference(int arr[], int n) {
        int maxDiff = Integer.MIN_VALUE;
        for (int j = 1; j < arr.length; ++j) {
            for (int i = 0; i < j; ++i) {
                if (arr[i] < arr[j]) {
                    maxDiff = maxDiff < arr[j] - arr[i] ? arr[j] - arr[i] : maxDiff;
                }
            }
        }
        return maxDiff == Integer.MIN_VALUE ? -1 : maxDiff;
    }
}