function primeCount(input) {
	let primeCount = 0;
    for (let i = 2; i <= input; ++i) {
        if (isPrime(i)) {
            ++primeCount;
        }
    }
	return primeCount;
}

function isPrime(num) {
    for (let i = 2; i <= Math.sqrt(num); ++i) {
        if (num % i === 0) {
            return false;
        }
    }
    return true;
}