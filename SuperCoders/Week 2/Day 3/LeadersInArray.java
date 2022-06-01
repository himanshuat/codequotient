class Result {
    static int[] findTheLeaders(int a[], int n) {
        int[] result = new int[n];
        int index = 0;
        
        for (int i = 0; i < n; ++i) {
            boolean leader = true;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] >= a[i]) {
                    leader = false;
                    break;
                }
            }
            if (leader) {
                result[index] = a[i];
                ++index;
            }
        }
        return result;
    }
}