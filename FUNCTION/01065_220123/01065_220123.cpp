#include <iostream>
using namespace std;

int count(int number) {
	int count=99;

	if (number < 100) {
		return number;
	}
	else {
		for (int i = 100; i <=number; i++)
		{
			int hunds = i / 100;
			int tens = i % 100/10;
			int ones = i % 10;
			if (hunds - tens == tens - ones) {
				count++;
			}
		}
	}

	return count;
}

int main() {
	int N;

	cin >> N;
	cout << count(N);
	return 0;
}