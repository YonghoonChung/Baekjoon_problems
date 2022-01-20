#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T,num, sum=0, max=-1;
	double percent = 0.0, avg = 0.0;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> num;
		sum += num;
		if (num > max) {
			max = num;
		}
	}
	avg = (double)sum / T;
	percent = avg / max*100;

	cout << percent << "\n";

	return 0;

}