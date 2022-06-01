class Result {
    static void moveElements(int arr[]) {
        int temp[] = new int[arr.length];

        for (int i = 0; i < arr.length; ++i) {
            temp[i] = arr[i];
        }
        int index = 0;
        for (int i = 0; i < arr.length; ++i) {
            if (temp[i] >= 0) {
                arr[index] = temp[i];
                ++index;
            }
        }
        for (int i = 0; i < arr.length; ++i) {
            if (temp[i] < 0) {
                arr[index] = temp[i];
                ++index;
            }
        }
    }
}
