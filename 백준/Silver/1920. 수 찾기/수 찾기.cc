#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int arr1[100001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	sort(arr1, arr1 + n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		cout << binary_search(arr1,arr1+n,a) << "\n";
	}

	return 0;
}