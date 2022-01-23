#include <iostream>
using namespace std;

int d(int num) {
	int sum = num;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}


int main() {
	bool arr[10001] = { false };
	int m = sizeof(arr) / sizeof(bool);
	for (int i = 1; i <m; i++) {
		int check = d(i);
		if (check < 10001) {
			arr[check] = true;
		}
	}
	for (int i = 1; i < m; i++){
		if (!arr[i]) {
			cout << i <<"\n";
		}
	}

	return 0;
}