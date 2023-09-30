#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct P {
	int k, e, m;
	string name;
};

bool cmp(P& a, P& b) {
	if (a.k == b.k) {
		if (a.e == b.e) {
			if (a.m == b.m) {
				return a.name < b.name;
			}		
			return a.m > b.m;
		}
		return a.e < b.e;
	}
	return a.k > b.k;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	vector<P>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string n; int a, b, c;
		cin >> n >> a >> b >> c;
		v.push_back({ a,b,c,n });
	}
	sort(v.begin(), v.end(), cmp);
	for (auto a : v) {
		cout << a.name << "\n";
	}
	return 0;
}