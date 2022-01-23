#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int num, cnt = 1, cnum,ones,tens;
	cin >> num;
	int anum = num;
	//if (num < 10) {
	//	num *= 10;
	//}
	while (true) {
		num = num % 10 * 10 + (num / 10 + num % 10) % 10;
		if (anum == num) {
			break;
		}
		cnt++;
	}
	cout << cnt <<"\n";
	return 0;
}