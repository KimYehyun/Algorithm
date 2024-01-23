#include<iostream>
#include<algorithm>
using namespace std;
int arr[100001];
bool flag[1000001];
int result[1000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	
	cin >> n;
	int max_v = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> arr[i];
		flag[arr[i]] = 1;
		max_v = max(max_v, arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = arr[i]*2; j <= max_v; j += arr[i]) {
			if (flag[j] == 1) {
				result[arr[i]]++;
				result[j]--;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << result[arr[i]] << " ";
	}
	
	return 0;
}