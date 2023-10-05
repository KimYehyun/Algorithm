#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a,	result=0;
		cin >> a;
		vector<int>v;
		cin >> a;
		v.push_back(a);
		for (int j = 1; j < 20; j++) {
			cin >> a;
			if (v[j-1] < a) {
				v.push_back(a);
			}
			else {
				auto idx = (upper_bound(v.begin(), v.end(), a)-v.begin());
				v.insert(v.begin()+idx, a);
				idx++;
				result += v.size() - idx;
			}
		}
		cout << i << " " << result<<"\n";
	}


	return 0;
}