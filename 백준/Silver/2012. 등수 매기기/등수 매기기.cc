#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll arr[500001];
ll n;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}	
	sort(arr, arr + n);
	
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += abs((i + 1) - arr[i]);
	}
	cout << sum << "\n";
	return 0;
}