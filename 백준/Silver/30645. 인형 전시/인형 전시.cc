#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int r, c, n, result;
int arr[1001][1001];
vector<int>v;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> r >> c >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	int k = 0; bool a= 0, b = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (k == n) {
				b = 1;
				break;
			}
			if (i > 0 && (arr[i - 1][j] >= v[k])) {
				while (1) {
					if (k == n) {
						a = 1;
						break;
					}
					if (arr[i - 1][j] < v[k]) break;
					k++;
				}
			}
			if (a == 1) break;
			arr[i][j] = v[k];
			k++;
			result++;
		}
		if (a==1 || b == 1) break;
	}

	cout << result;

	return 0;
}