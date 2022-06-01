class Result {
    static void sorting012Array(int a[], int n) {
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 0)
            {
                ++count0;
            }
            else if (a[i] == 1)
            {
                ++count1;
            }
            else if (a[i] == 2)
            {
                ++count2;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (i < count0)
            {
                a[i] = 0;
            }
            else if (i < count0 + count1)
            {
                a[i] = 1;
            }
            else if (i < count0 + count1 + count2)
            {
                a[i] = 2;
            }
        }
    }
}
