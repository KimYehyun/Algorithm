#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cin.tie(0);
	int t, d, s;
	int arr[15];
	memset(arr, 0, sizeof(int) * 15);
	cin >> t >> d >> s;

	for (int i = 0; i < d; i++) {
		int n;
		cin >> n;
		arr[n] = -1;
	}
	for (int i = 0; i < s; i++) {
		int n;
		cin >> n;
		if (arr[n] == 0)
			arr[n] = 1;
		else
			arr[n] = 0;
	}

	for (int i = 1; i <= t; i++) {
		if (arr[i] == -1) {
			
			if(arr[i-1]==1){
				arr[i] = 0;
				arr[i - 1] = 0;
			}
			else if (arr[i + 1] == 1) {
				arr[i] = 0;
				arr[i + 1] = 0;
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= t; i++) {
		if (arr[i] == -1) cnt++;
	}

	cout << cnt;

	return 0;

}