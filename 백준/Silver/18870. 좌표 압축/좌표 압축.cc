#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int>v;
vector<int>v2;
vector<int>v3;
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		v2.push_back(a);
	}
	sort(v2.begin(), v2.end());

	int a = v2.front();
	v3.push_back(v2.front());
	for (int i = 1; i < n; i++) {
		if (a == v2[i])
			continue;
		else {
			a = v2[i];
			v3.push_back(a);	
		}
	}

	for (int i = 0; i < n; i++) 
		cout << lower_bound(v3.begin(), v3.end(), v[i]) - v3.begin() << ' ';
	
	return 0;
}