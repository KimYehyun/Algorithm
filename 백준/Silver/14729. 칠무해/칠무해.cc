#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
vector<double>v;
int main(void) {

	cin >> n;

	for (int i = 0; i < n; i++) {
		double a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < 7; i++) {
		cout << v[i] << "\n";
	}

	return 0;
}