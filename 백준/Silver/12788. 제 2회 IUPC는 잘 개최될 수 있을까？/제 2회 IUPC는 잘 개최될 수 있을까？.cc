#include<iostream>
#include<algorithm>
using namespace std;
int arr[10000];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m ,k;
	cin >> n >> m >>k;

	int result = m * k;
	int sum = 0; bool b = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr + n,greater<>());

	for(int i=0;i<n;i++){
		sum += arr[i];
		if (sum >= result) {
			cout << i+1 << "\n";
			b = 1;
			break;
		}
	}

	if (b == 0) {
		cout << "STRESS" << "\n";
	}

	return 0;

}