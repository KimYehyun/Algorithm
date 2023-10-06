#include<iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int len[50] = { 1,2, };
	int A[50] = { 0,1, };
	for (int i = 2; i < 45; i++) {
		A[i] = A[i - 2] + A[i - 1];
		len[i] = len[i - 2] + len[i - 1];
	}
	int n;
	cin >> n;
	cout << A[n - 1] << " " << len[n - 1] - A[n - 1];


	return 0;
}