#include<iostream>
#include<algorithm>
using namespace std;
long long arr[100001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; 
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, greater<>());
	
	long long max_v = arr[0]+1;
	for(int i=1;i<n;i++){
		max_v = max(max_v, arr[i] + i + 1);
	}
	cout << max_v+1;
	return 0;
}