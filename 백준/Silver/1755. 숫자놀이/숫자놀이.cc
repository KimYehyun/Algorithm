#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string arr[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
vector<pair<string, int>>v;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = n; i <= m; i++) {
		string str = to_string(i);
		if (str.size() == 1) {
			v.push_back({ arr[i],i });
		}
		else {
			string s = "";
			s += arr[str[0]-'0'];
			s+= arr[str[1] - '0'];
			v.push_back({ s,i });	
		}
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	for (auto a : v) {
		if (cnt == 10) {
			cout << "\n";
			cnt = 0;
		}
		cout << a.second << " ";
		cnt++;

	}

	return 0;
}