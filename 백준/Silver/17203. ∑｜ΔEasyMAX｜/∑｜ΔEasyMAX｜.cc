#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[1002];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;
		int sum = 0;
		for (int i = s; i < e; i++) {
			sum += abs(arr[i] - arr[i + 1]);
		}
		cout << sum << "\n";
	}
    return 0;
}