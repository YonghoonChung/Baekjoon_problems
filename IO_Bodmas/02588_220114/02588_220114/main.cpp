#include <iostream>
using namespace std;
int main() {
	int a, b, sum=0;

	cin >> a >> b;

	cout << a * (b % 10) << "\n";
	sum += a * (b % 10);
	b /= 10;

	cout << a * (b % 10) << "\n";
	sum += a * (b % 10)*10;
	b /= 10;

	cout << a * (b % 10) << "\n";
	sum += a * (b % 10) * 100;

	cout << sum;

	return 0;
}