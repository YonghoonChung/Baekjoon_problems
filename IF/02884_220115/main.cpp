#include <iostream>
using namespace std;

//min >45 -> min -45
//min <= 45 -> 60 -(45-min), hr - 1
//	hr == 0 -> hr = 23

int main() {
	int hr, min;

	cin >> hr >> min;

	if (min >= 45) {
		min -= 45;
	}
	else {
		min = 60 - (45 - min);
		if (hr == 0) {
			hr = 23;
		}
		else hr--;
	}
	cout << hr << " " << min;
	return 0;
}