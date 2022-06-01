class Result {
    int rotationCount(int arr[], int size) {
        if (!(arr[0] > arr[size - 1])) {
            return 0;
        }

        int start = 0;
        int end = size - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (mid == 0) {
                return arr[mid] > arr[mid + 1] ? 1 : 0;
            }
            else if (mid == size - 1) {
                return arr[mid] < arr[mid - 1] ? mid : 0;
            }
            else {
                if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1]) {
                    return mid;
                }
                else if (arr[start] > arr[mid]) {
                    end = mid;
                }
                else {
                    start = mid;
                }
            }
        }
        return 0;
    }
}