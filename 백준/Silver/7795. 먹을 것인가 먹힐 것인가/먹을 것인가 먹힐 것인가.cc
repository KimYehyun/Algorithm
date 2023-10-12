#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int a, b, k, cnt = 0;
		vector<int>v1,v2;
		cin >> a >> b;
		for (int i = 0; i < a; i++) {
			cin >> k;
			v1.push_back(k);
		}
		for (int j = 0; j < b; j++) {
			cin >> k;
			v2.push_back(k);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());

		for (int i = 0; i < a; i++) {
			cnt += lower_bound(v2.begin(), v2.end(), v1[i])-v2.begin();
		}
		cout << cnt << "\n";
	}

	return 0;
}