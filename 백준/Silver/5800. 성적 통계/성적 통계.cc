#include<iostream>
#include<algorithm>
#include<memory.h>
using namespace std;

int arr[51];
int n, k,mx,mn=100,gap;
int main(void) {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> arr[j];
			mx = max(mx, arr[j]);
			mn = min(mn, arr[j]);
		}
		sort(arr, arr + k);
		for (int j = 1; j < k; j++) 
			gap = max(gap, arr[j] - arr[j - 1]);
	
		cout << "Class " << i << "\n";
		cout << "Max " << mx << ", Min " << mn << ", Largest gap " << gap << "\n";
		memset(arr, 0, sizeof(arr));
		mx = 0; mn = 100; gap = 0;
	}
	
	return 0;
}