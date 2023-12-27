#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector<pair<int, int>>v1, v2;
bool cmp1(pair<int,int>&a, pair<int,int>&b){
	if (a.first == b.first) 
		return a.second < b.second;
	return a.first > b.first;
}

bool cmp2(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second) 
		return a.first > b.first;
	return a.second < b.second;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v1.push_back({ a,b });
		v2.push_back({ a,b });
	}
	sort(v1.begin(), v1.end(), cmp1);
	sort(v2.begin(), v2.end(), cmp2);
	cout << v1[0].first << " " << v1[0].second << " " << v1[1].first << " " << v1[1].second << "\n";
	cout << v2[0].first << " " << v2[0].second << " " << v2[1].first << " " << v2[1].second << "\n";
	return 0;
}