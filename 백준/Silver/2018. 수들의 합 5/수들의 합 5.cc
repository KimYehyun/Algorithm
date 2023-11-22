#include<iostream>
using namespace std;
int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	long long n;
	cin >> n;

	long long left = 1, right = 2;
	long long sum = left;
	int cnt = 0;
	while (1) {
		if (sum == n) {
			cnt++;
			if (right > n) break;
		}
		if (sum > n) {
			sum -= left;
			left++;
		}
		else {
			sum += right;
			right++;
		}
	}

	cout << cnt << "\n";


	return 0;
}