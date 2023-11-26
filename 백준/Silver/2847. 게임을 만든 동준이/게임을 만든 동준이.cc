#include<iostream>
using namespace std;
int n;
int arr[101];
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	long long sum = 0;
	int i = n - 1;
	while(i>0) {
		if (arr[i] <= arr[i - 1]) {
			sum += arr[i-1] - (arr[i] - 1);
			arr[i-1] = arr[i] - 1;
		}
		i--;
	}
	cout << sum << "\n";
	return 0;
}