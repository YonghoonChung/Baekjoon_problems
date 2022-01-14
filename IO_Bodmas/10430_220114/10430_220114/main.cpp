#include <iostream>
using namespace std;
int main() {
	int A,B,C;

	cin >> A>>B>>C;

	//첫째 줄에(A + B) % C, 둘째 줄에((A % C) + (B % C)) % C, 셋째 줄에(A×B) % C, 넷째 줄에((A % C) ×(B % C)) % C

	cout << (A + B) % C << "\n";
	cout << ((A % C) + (B % C)) % C << "\n";
	cout << (A*B) % C << "\n";
	cout << ((A % C) *(B % C)) % C << "\n";

	return 0;
}