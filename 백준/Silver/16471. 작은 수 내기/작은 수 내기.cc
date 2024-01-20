#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
vector<int>v1;
vector<int>v2;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v2.push_back(a);
	}
	sort(v1.begin(),v1.end(),greater<>());
	sort(v2.begin(), v2.end(), greater<>());
	int cnt = 0;
	while(1) {
		int s1 = v1.size()-1;
		int s2 = v2.size()-1;
		if (s1 < 0 || s2 < 0) break;
		if (v1[s1] >= v2[s2]) v2.pop_back();
		else {
			cnt++;
			v1.pop_back();
			v2.pop_back();
		}
	}
	if (cnt >= (n + 1) / 2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}