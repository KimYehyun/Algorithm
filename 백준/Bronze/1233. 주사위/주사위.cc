#include<iostream>
#include<vector>
using namespace std;

int arr[100];
int main(void) {
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				arr[i + j + k]++;
			}
		}
	}
	int max = 0;
	int result = 0;
	for (int i = 3; i <= 80; i++) {
		if (max < arr[i]) {
			max = arr[i];
			result = i;
		}
	}
	cout << result;

	return 0;
}