#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[1025][1025];
int n;

int solve(int half, int x, int y) {
	vector<int> v;
	if (half == 1) {
		v.push_back(arr[y][x]);
		v.push_back(arr[y][x + 1]);
		v.push_back(arr[y + 1][x]);
		v.push_back(arr[y + 1][x + 1]);
		sort(v.begin(), v.end());
		return v[2];
	}
	else {
		v.push_back(solve(half / 2, x, y));
		v.push_back(solve(half / 2, x + half, y));
		v.push_back(solve(half / 2, x, y + half));
		v.push_back(solve(half / 2, x + half, y + half));
		sort(v.begin(), v.end());
		return v[2];
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	cout << solve(n / 2, 0, 0) <<"\n";
    return 0;
}