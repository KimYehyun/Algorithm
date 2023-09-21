#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b) {
	return a.second < b.second;
}

int main(void) {
	int n, m;
	unordered_map<string, int> um;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		string a;
		cin >> a;
		if (um.find(a) != um.end())
			um.erase(a);
		um.insert({a,i});
	}


	vector<pair<string, int>> vec;

	for (auto iter:um) {
		vec.push_back({ iter.first,iter.second });
	}

	sort(vec.begin(), vec.end(),cmp);
	
	

	for (int i = 0; i < vec.size(); i++) {
		if (i == n)break;
		cout << vec[i].first << "\n";
	}

	return 0;
}