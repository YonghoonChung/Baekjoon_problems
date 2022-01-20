#include <iostream>
#include <string>
using namespace std;

double avgCnt(int subjects) {
	int sum = 0, score, arr[1000], cnt = 0;
	double avg;

	for (int i = 0; i < subjects; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	avg = (double)sum / subjects;
	for (int i = 0; i < subjects; i++) {
		if (arr[i] > avg) {
			cnt++;
		}
	}
	return (double)cnt / subjects;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int C, N, score;

	cin >> C;

	for (int i = 0; i < C; i++) {
		cin >> N;
		cout.precision(3);
		cout << fixed;
		cout << avgCnt(N) * 100 << "%\n";
	}

	return 0;

}