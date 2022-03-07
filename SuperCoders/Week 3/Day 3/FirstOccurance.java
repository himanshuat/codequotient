class Result {
    static int firstIndexofK(int arr[], int n, int k) {
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == k) {
                if (mid == 0) {
                    return mid;
                } else if (arr[mid] != arr[mid - 1]) {
                    return mid;
                } else {
                    end = mid - 1;
                }
            } else if (arr[mid] > k) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }

    static long solveChallenges(int N, int arr[], int K, int challenges[]) {
        long sum = 0;
        for (int i = 0; i < K; ++i) {
            sum += firstIndexofK(arr, N, challenges[i]);
        }
        return sum;
    }
}