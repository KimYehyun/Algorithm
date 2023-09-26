#include<iostream>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int A, B, V;
	cin >> A >> B >> V;

	int cnt = (V - B - 1) / (A - B) + 1;
	cout << cnt;
	return 0;
}