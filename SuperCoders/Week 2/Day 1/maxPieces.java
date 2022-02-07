class Result {
  	static long maxPieces(int k) {
    	long a = k / 2;
		long b = k - a;
		return a * b;
  	}
}