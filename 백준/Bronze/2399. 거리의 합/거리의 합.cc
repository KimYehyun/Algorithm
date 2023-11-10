#include<iostream>
#include<algorithm>
using namespace std;
int n;
int arr[10001];
int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = 0, right =1;
	long long sum = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)continue;
			sum += abs(arr[i] - arr[j]);
		}
	}
	cout << sum;
	return 0;
}