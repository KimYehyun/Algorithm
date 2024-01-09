#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m, s=1001, o=1001;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		s = min(s, a);
		o = min(o, b);
	}
	int sum1 = 0, sum2 =0, sum3 = 0;
	int k = n;
	
	while (k>0) {
		if (k >= 6) {
			sum1 += s;
			k -= 6;
		}
		else {
			sum1 += o;
			k--;
		}
	}

	k = n;
	while (k > 0) {
		sum2 += s;
		k -= 6;	
	}

	k = n;
	while (k > 0) {
		sum3 += o;		
		k--;
		
	}
	cout << min({sum1,sum2,sum3}) << "\n";

	return 0;
}