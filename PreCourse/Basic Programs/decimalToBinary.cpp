#include <iostream>
using namespace std;

#include <stack>
void decimalToBinary(int n)
{
	//Write your Code here
	stack<int> binaryNum;
	while (n > 0)
	{
		binaryNum.push(n % 2);
		n = n / 2;
	}

	while (!binaryNum.empty())
	{
		cout << binaryNum.top();
		binaryNum.pop();
	}
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		decimalToBinary(n);
		cout << "\n";
	}

	return 0;
}