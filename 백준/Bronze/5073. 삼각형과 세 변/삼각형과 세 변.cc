#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	while (1) {
		int arr[3];
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 3);

		if (arr[0] == 0 && arr[1] == 0 && arr[2]==0) break;

		if (arr[0] + arr[1] > arr[2]) {
			if (arr[0] == arr[1] && arr[1] == arr[2]) {
				cout << "Equilateral" << "\n";
			}
			else if (arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2]) {
				cout << "Isosceles" << "\n";
			}
			else {
				cout << "Scalene" << "\n";
			}
		}
		else {
			cout << "Invalid" << "\n";
		}
			
	}

	return 0;
}