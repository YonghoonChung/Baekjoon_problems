#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, X,A;
	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		cin >> A;
		if (X > A) {
			cout << A<<" ";
		}
	}
	return 0;
}
// -----------------------------------
#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, X;
	cin >> N >> X;
	int A[10000];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] < X)
		{
			cout << A[i] << " ";
		}
	}
	return 0;
}
