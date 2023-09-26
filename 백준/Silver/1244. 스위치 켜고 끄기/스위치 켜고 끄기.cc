#include<iostream>
#include<vector>
using namespace std;
int n, s;
bool sw[101];

void w(int num) {
	int r = num + 1;
	int l = num - 1;
	sw[num] = !sw[num];
	while (l>=1 && r <=n) {
		if (sw[r] != sw[l])
			break;
		sw[r] = !sw[r];
		sw[l] = !sw[l];
		r++;
		l--;	
	}
}

void m(int num) {
	for (int i = num; i <= n; i += num)
		sw[i] = !sw[i];
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> sw[i];
	}
	cin >> s;
	for (int i = 0; i < s; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 1) m(b);
		else w(b);
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (cnt == 20) {
			cnt = 0;
			cout << "\n";
		}
		cout << sw[i] << " ";
		cnt++;
	}
		
	return 0;
}