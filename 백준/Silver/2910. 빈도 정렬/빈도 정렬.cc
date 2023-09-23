#include<iostream>
#include <map>
#include<vector>
#include<algorithm>
using namespace std;

int n, c;
map <int, int>m;
map <int, int> m2;
bool cmp(pair<int, int>& a, pair<int, int>& b){
	if (a.second == b.second)
		return m2[a.first] < m2[b.first]; 
	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> c;



	for (int i = 0; i < n; i++){

		int a;
		cin >> a;
		m[a]++;
		if (m2[a] == 0) m2[a] = i + 1;
	}

	vector<pair<int, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), cmp);

	for (auto x : v)
		for (int i = 0; i < x.second; i++) cout << x.first << " ";
	

	return 0;
}