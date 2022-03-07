class Result {
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
}