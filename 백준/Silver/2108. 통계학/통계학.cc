#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int n;
double sum;
int mode[500001];
int mid[500001];
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
		mid[i] = a;
		mode[a + 4000]++;
	}


	
	sum = round(sum / (double)n);
	
	cout << (int)sum << "\n";

	sort(mid, mid + n);
	cout << mid[n / 2] << "\n";

	int result = *max_element(mode, mode + 500001);
	int rep;
	int cnt = 0;

	for (int i = 0; i < 8001; i++) {
		if (cnt == 2)break;
		if (mode[i] == result) {
			rep = i;
			cnt++;
		}
	}
	rep -= 4000;

	cout << rep << "\n";

	int start = mid[0];
	int end = mid[n - 1];
	
	if (start < 0 && end < 0)
		cout << abs(start) - abs(end) << "\n";
	else
		cout << end - start << "\n";


	return 0;
}