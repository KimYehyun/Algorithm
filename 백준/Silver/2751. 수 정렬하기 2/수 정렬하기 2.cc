#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<int>v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}