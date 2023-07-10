#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b) {
	if (a.second == b.second) // first 값이 같다면?
	{
		return a.first < b.first; 
	}
	return a.second > b.second;
}

vector<pair<string, int>>v;
int main(void) {

	int n;
	cin >> n;
	string str;
	cin >> str;
	v.push_back(make_pair(str, 1));
	for (int i = 1; i < n; i++) {
		bool chk = 0;
		cin >> str;
		for (int j = 0; j < v.size(); j++) {
			if (v[j].first == str) {
				v[j].second++;
				chk = 1;
				break;
			}
		}
		if (chk == 0)
			v.push_back(make_pair(str, 1));
				
	}

	sort(v.begin(), v.end(),compare);

	cout << v[0].first << endl;

	return 0;
}