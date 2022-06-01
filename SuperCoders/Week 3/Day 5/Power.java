class Result {
	static long power(int base, int exp) {
		if (exp < 0) {
			return -1;
		}
		if (exp == 0) {
			return 1;
		}
		if (exp == 1) {
			return base;
		}
		int half = exp / 2;
		return power(base, half) * power(base, exp - half);
	}
}