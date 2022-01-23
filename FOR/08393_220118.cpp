#include <iostream>
using namespace std;

int main(void) {
	int n, A,B, sum = 0;

	cin >> n;
	for (int i = 1; i <=n; i++)
	{
		sum += i;
	}
	cout << sum << "\n";
	return 0;
}
