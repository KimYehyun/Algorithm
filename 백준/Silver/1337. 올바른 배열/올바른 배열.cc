#include<iostream>
#include<algorithm>
using namespace std;

long long arr[51];

int main(void) {

	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%lld", &arr[i]);
	}

	sort(arr, arr + a);
	int cnt = 1;
	for (int i = 0; i < a; i++) {
		int n = 1;
		for (int j = i + 1; j < i + 5; j++) {
			if (arr[j] - arr[i] < 5 && arr[j] - arr[i]>0) 
				n++;
		}
		cnt = max(cnt, n);
	}

	if (cnt >= 5) printf("0\n");
	else printf("%d", 5 - cnt);

	return 0;
}