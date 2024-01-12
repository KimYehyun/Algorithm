#include<iostream>
#include<algorithm>
using namespace std;
int t[101];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int a, b, c;
	cin >> a >> b >> c;
    for (int i = 0; i < 3; i++) {
        int s, e;
        cin >> s >> e;
        for (int j = s; j < e; j++) t[j]++;
    }
    int ans = 0;
    for (int i = 1; i <=100; i++) {
        if (t[i] == 1) ans += t[i] * a;
        else if (t[i] == 2) ans += t[i] * b;
        else ans += t[i] * c;
    }
    cout << ans << '\n';
	return 0;
}