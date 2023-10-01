#include<iostream>
#include<algorithm>
using namespace std;

int n, m; long long sum = 0;
long long arr[300001];

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;

	cin >> arr[0];
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		arr[i] = arr[i] + arr[i-1];
	}


	sort(arr, arr + n, greater<long long>());

	
	for (int i = 0; i < m; i++)
		sum += arr[i];

	cout << sum << "\n";

	return 0;
}