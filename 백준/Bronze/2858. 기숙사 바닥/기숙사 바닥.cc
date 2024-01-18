#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int brown, yellow;
	cin >> brown >> yellow;
    vector<pair<int, int>>v;
    for (int i = 1; i <= sqrt(yellow); i++) {
        if (yellow % i == 0) {
            v.push_back({ i,yellow / i });
        }
    }

    for (int i = 0; i < v.size(); i++) {
        if (brown == (v[i].first + 2) * (v[i].second + 2) - yellow) {
            cout << v[i].second + 2 << " " << v[i].first + 2;
        }
    }

	return 0;
}