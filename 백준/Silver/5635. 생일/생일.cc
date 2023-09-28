#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct P {
	int y, m, d;
	string n;
};

bool cmp(P& a, P& b) {
	if (a.y == b.y) {
		if (a.m == b.m)
			return a.d < b.d;
		return a.m < b.m;
	}
	return a.y < b.y;
}

int main(void) {

	int n;
	cin >> n;
	vector<P>v;
	for (int i = 0; i < n; i++) {
		string name; int dd, mm, yy;
		cin >> name >> dd >> mm >> yy;
		v.push_back({ yy,mm,dd,name });
	}
	sort(v.begin(), v.end(),cmp);

	cout << v[v.size() - 1].n <<"\n"<< v[0].n << "\n";

	return 0;
}