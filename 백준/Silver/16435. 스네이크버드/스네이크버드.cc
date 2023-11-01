#include<iostream>
#include<algorithm>
using namespace std;
int n, l, arr[10001];
int main(void) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> l;
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		if (arr[i] > l) break;
		l++;
	}
	cout << l;
	return 0;
}