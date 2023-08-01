#include<iostream>
using namespace std;

int n;
int arr[1001];
int result[1001];

int b_search(int left, int right, int key) {
	int mid;
	while (left < right) {
		mid = (left + right) / 2; 
		if (result[mid] < key) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}
	return right;
}

int main(void) {
	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int i = 1;
	int j = 0;
	result[0] = arr[0];
	while (i < n) {
		if (result[j] < arr[i]) {
			result[j + 1] = arr[i];
			j++;
		}
		else {
			int idx = b_search(0, j, arr[i]);
			result[idx] = arr[i];
		}
		i++;
	}

	cout << j + 1;
	
	return 0;
}