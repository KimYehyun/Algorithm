#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node {
	string name;
	double height;
	int a;
};

bool cmp(node& a, node& b) {
	if (a.height == b.height) return a.a < b.a;
	return a.height > b.height;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	while (1) {
		int n;
		vector<node>v;
		cin >> n;
		if (n == 0) 
			break;
		for (int i = 0; i < n; i++) {
			double a; string b;
			cin >> b >> a;
			v.push_back({ b,a,i });
		}
		sort(v.begin(), v.end(), cmp);
		
		cout << v[0].name << " ";
		for (int i = 1; i < n; i++) {
			if (v[0].height == v[i].height) cout << v[i].name << " ";
		}
		cout << "\n";
	}

	return 0;
}