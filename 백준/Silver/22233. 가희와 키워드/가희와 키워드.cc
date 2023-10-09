#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>
using namespace std;

vector<string>split(string input, string d) {
	long long pos = 0;
	vector<string>ret;
	string token = "";
	while ((pos = input.find(d)) != -1) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + 1);
	}
	ret.push_back(input);
	return ret;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	string str;
	unordered_set<string>us;
	for (int i = 0; i < n; i++) {
		cin >> str;
		us.insert(str);
	}

	for (int i = 0; i < m; i++) {
		cin >> str;
		vector<string> a = split(str, ",");
		for (int j = 0; j < a.size(); j++) {
			us.erase(a[j]);
		}
		cout << us.size()<<"\n";
	}
	return 0;
}