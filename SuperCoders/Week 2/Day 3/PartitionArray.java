class Result {
    static void partitionArray(int arr[], int x) {
        int i, j, temp;
        int n = arr.length;
        i = 0;
        j = n - 1;

        while (i < j) {
            while (i<n && arr[i]<=x)
                i++;
            while (j>=0 && arr[j]>x)
                j--;

            if(i < j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            i++;
            j--;
        }
    }
}
