#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

/*
 * Complete the function 'addDigitByDigit'
 * @params
 *   a,b,c => numbers which are to be added
 * @return
 *  sum of the three numbers added digit by digit
 */

int addDigitByDigit(int a, int b, int c)
{
	// Write your code here
	return a + b + c;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << addDigitByDigit(a, b, c) << endl;
	return 0;
}