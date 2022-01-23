#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		int num1, num2;
		cin >> num1 >> num2;

		if (num1 == 0 && num2 == 0) {
			break;
		}
		cout << num1 + num2 << "\n";
	}

	return 0;
}