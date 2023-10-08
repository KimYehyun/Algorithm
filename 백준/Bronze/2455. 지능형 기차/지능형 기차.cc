#include<iostream>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int people = 0, max_p = 0;
	for (int i = 0; i < 4; i++) {
		int a, b;
		cin >> a >> b;
		people -= a;
		people += b;
		if (max_p < people) max_p = people;
	}
	cout << max_p << "\n";
	return 0;
}