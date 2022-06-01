class Result {
    static int[] merge(int[] A, int[] B) {
        int[] result = new int[A.length + B.length];
        int i = 0, j = 0, k = 0;

        while (i < A.length && j < B.length) {
            if (A[i] >= B[j]) {
                result[k++] = A[i++];
            } else {
                result[k++] = B[j++];
            }
        }

        while (i < A.length) {
            result[k++] = A[i++];
        }

        while (j < B.length) {
            result[k++] = B[j++];
        }

        return result;
    }

    static int[] mergeSort(int[] arr, int start, int end) {
        if (arr.length < 2) {
            return arr;
        }
        int mid = (start + end) / 2;
        int[] A = mergeSort(arr, 0, mid);
        int[] B = mergeSort(arr, mid + 1, end);
        arr = merge(A, B);

        return arr;
    }

    static int getMajorityElement(int[] nums) {
        nums = mergeSort(nums, 0, nums.length);
        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }
        System.out.println("-----------------------");
        return 0;
    }
}