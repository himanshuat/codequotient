class Result {
    static int specialIndex(int arr[], int n) {
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        
        int leftSum = 0;
        int rightSum = 0;

        for (int i = 0; i < arr.length; ++i) {
            if (i == 0) {
                leftSum = 0;
                rightSum = sum - leftSum - arr[i];
            }
            else if (i == arr.length - 1) {
                leftSum += arr[i - 1];
                rightSum = 0;
            }
            else {
                leftSum += arr[i - 1];
                rightSum = sum - leftSum - arr[i];
            }

            if (leftSum == rightSum) {
                return i;
            }
        }

        return -1;
    }
}