#include<iostream>
using namespace std;
int arr[200001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m, v;
	cin >> n >> m >> v;
	v -= 1;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		if (a < n) {
			cout << arr[a] << "\n";
		}
		else {
			int idx = (a-v)  % (n - v) +v ;
			//cout << "idx: " << idx<<"\n";
			cout << arr[idx] << "\n";
		}
	}
	return 0;
}