#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	
	int n;
	int arr[1001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	int sum = arr[0];
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i];
		sum += arr[i];
	}

	printf("%d", sum);

	return 0;
}