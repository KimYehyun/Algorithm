#include<iostream>
#include<algorithm>
using namespace std;

int n;
int arr[2250001];
int main(void) {

	scanf("%d", &n);
	int k = n * n;
	for (int i = 0; i < k; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + k, greater<int>());

	printf("%d", arr[n-1]);

	return 0;
}