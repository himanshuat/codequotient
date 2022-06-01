class Result {
	static long sqrt(long n) {
		if (n == 0 || n == 1) {
			return n;
		}

		long start = 0;
		long end = n;
		long mid = (start + end) / 2;
		while (start <= end) {
			mid = (start + end) / 2;
			long square = mid * mid;
			if (square == n) {
				return mid;
			}
			else if (square > n) {
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}
		System.out.println("---------------");
		System.out.println("Start: "+start);
		System.out.println("End: "+end);
		return mid - 1;
	}
}