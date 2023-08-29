#include<iostream>
#include<algorithm>
using namespace std;

int n,sum;
int A[51],B[51];

int main(void) {
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> A[i];
	for (int i = 0; i < n; i++)
		cin >> B[i];

	sort(A, A + n);
	sort(B, B + n,greater<int>());

	for (int i = 0; i < n; i++) {
		sum += A[i] * B[i];
	}
	cout << sum << "\n";
	return 0;
}