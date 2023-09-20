#include<iostream>
using namespace std;
int main(void) {
	int n,m;
	cin >> n >> m;
	int arr[15001];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int cnt = 0;

	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i] + arr[j] == m)
				cnt++;
		}
	}
	cout << cnt;
	return 0;
 }