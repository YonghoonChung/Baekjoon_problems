#include <iostream>
using namespace std;

int main(void) {
	int n, A,B, i=0;

	cin >> n;

	while (i != n) {
		cin >> A >> B;

		cout << A + B << "\n";
		i++;
	}
	return 0;
}
