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

    static int lastIndexofK(int arr[], int n, int k) {
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == k) {
                if (mid == n - 1) {
                    return mid;
                }
                else if (arr[mid] != arr[mid + 1]) {
                    return mid;
                }
                else {
                    start = mid + 1;
                }
            }
            else if (arr[mid] > k) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return -1;
    }

    static long solveChallenges(int N, int arr[], int K, int challenges[]) {
        long sum = 0L;
        for (int i = 0; i < K; ++i) {
            int first = firstIndexofK(arr, N, challenges[i]);
            int last = lastIndexofK(arr, N, challenges[i]);
            if (first == -1) {
                sum += 0;
            }
            else if (first == last) {
                ++sum;
            }
            else {
                sum += (last - first) + 1;
            }
        }
        return sum;
    }
}