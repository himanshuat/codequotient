class Result {
	static void reverse(int[] arr, int start, int end) {
		while (start <= end) {
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			++start;
			--end;
		}
	}

	static void solveQueries(int N, int R, int arr[], int Q, int queries[]) {
		R = R % N;
		
		reverse(arr, 0, R - 1);
		reverse(arr, R, N - 1);
		reverse(arr, 0, N - 1);

		for (int query : queries) {
			System.out.printf("%d ", arr[query]);
		}
	}
}