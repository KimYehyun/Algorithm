#include<iostream>
using namespace std;
int n;
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
 
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b;
		c = a + b;
		int t = ans % c;
		ans++;
		if (t < b)
			ans += (b - t);
	}

	cout << ans;
    return 0;
}