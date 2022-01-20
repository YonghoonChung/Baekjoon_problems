#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T, sum=0, num=0;
	string s;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> s;
		sum = 0, num = 0;

		for (char c : s) {
			if (c == 'O') {
					sum += ++num;
			}
			else {
				num = 0;
			}
		}
		cout << sum << "\n";
	}

	return 0;

}