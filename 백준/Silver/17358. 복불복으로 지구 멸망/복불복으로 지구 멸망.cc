#include <iostream>

using namespace std;
long long n;
long long ans = 1;
long long m = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	cin >> n;
	

	while (n) {
		ans *= n - 1;
		ans %= m;
		n -= 2;
	}

	cout << ans;

	return 0;
}
