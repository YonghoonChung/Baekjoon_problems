#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int num, total = 0, arr[42] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		arr[num % 42]++;
	}

	for (int v : arr) {
		if (v != 0) {
			total++;
		}
	}
	cout << total;
	return 0;

}