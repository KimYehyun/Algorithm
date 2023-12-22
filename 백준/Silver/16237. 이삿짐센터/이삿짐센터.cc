#include<iostream>
using namespace std;
int arr[6];
int ans;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	for (int i = 1; i <= 5; i++) {
		cin >> arr[i];
	}
	ans += arr[5];

	if (arr[4] <= arr[1]) {
		ans += arr[4];	
		arr[1] -= arr[4];
	}
	else {
		ans += arr[1];
		arr[4] -= arr[1];
		ans += arr[4];
		arr[1] = 0;
	}
	
	
	if (arr[3] <= arr[2]) {
		ans += arr[3];
		arr[2] -= arr[3];
		arr[3] = 0;
	}
	else {
		ans += arr[2];
		arr[3] -= arr[2];
		arr[2] = 0;
	}

	while (arr[3]) {
		if (arr[1] >= 2) {
			arr[3]--;
			arr[1] -= 2;
			ans++;
		}
		else if (arr[1] >= 1) {
			arr[3]--;
			arr[1]--;
			ans++;
		}
		else {
			arr[3]--;
			ans++;
		}
	}

	while (arr[2]) {
		if (arr[2] >= 2) {
			arr[2] -= 2;
			if (arr[1] > 0) {
				arr[1]--;
			}
			ans++;
		}
		else if (arr[2] >= 1) {
			arr[2]--;
			if (arr[1] >= 3) {
				arr[1] -= 3;
			}
			else if (arr[1] >= 2) {
				arr[1] -= 2;
			}
			else if(arr[1]>=1){
				arr[1]--;
			}
			ans++;
		}
		else {
			arr[2]--;
			ans++;
		}
	}

	ans += (arr[1] % 5 == 0) ? arr[1] / 5 : arr[1] / 5 + 1;
	
	cout << ans << "\n";
	return 0;
}