#include <iostream>
#define MAX 1000001
#define MOD 1000000009
using namespace std;

long long arr[1000000];
int main() {
	int n;
	int ans;
	scanf("%d", &n);

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 0; i < n; i++) {
		scanf("%d", &ans);
		for (int j = 4; j <= ans; j++) {
			arr[j] = (arr[j - 1] + arr[j - 2] + arr[j - 3]) % MOD;
		}
		printf("%d\n", arr[ans]);
	}
	return 0;
}