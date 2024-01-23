#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<int>v;
int n;
int max_v = 0;
long long sum;
bool check(int target) {
	long long hap = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] <= target) {
			hap += v[i];
		}
		else if (v[i] > target) {
			hap += target;
		}
	}
	if (hap >= round((double)sum/2)) return true;
	else return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	
	for (int i = 0; i < n*n; i++) {
		int a;
		cin >> a;
		if (a != 0)v.push_back(a);
		sum += a;
		max_v = max(max_v, a);
	}
	
	
	int left = 0, right = max_v;
	int ans = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(mid)) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	cout << left << "\n";
	return 0;
}