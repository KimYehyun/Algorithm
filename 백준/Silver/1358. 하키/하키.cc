#include<iostream>
#include<cmath>
using namespace std;
int arr[210][210];
int main(void) {
	int W, H, X, Y, P, ans = 0;
	cin >> W >> H >> X >> Y >> P;
	for (int i = 0; i < P; i++) {
		int a, b;
		cin >> a >> b;
		if (pow(X - a, 2) + pow(Y + H / 2 - b, 2) <= pow(H / 2, 2)) ans++;
		else if (X <= a && a <= X + W && Y <= b && b <= Y + H) ans++;
		else if (pow(X + W - a, 2) + pow(Y + H / 2 - b, 2) <= pow(H / 2, 2)) ans++;
	}
	cout << ans << "\n";
	return 0;
}