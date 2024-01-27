#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
    vector<int>v;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n - m + 1; i++){
        int a;
        cin >> a;
        sort(v.begin(), v.begin() + m);
        v.erase(v.begin() + (a - 1));

    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
  
	return 0;
}