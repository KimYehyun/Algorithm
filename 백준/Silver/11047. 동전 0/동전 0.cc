#include<iostream>
using namespace std;

int main(void) {

	int n;
	long long k;
	int coin[11];
	scanf("%d %lld", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &coin[i]);
	}
	int c = 0;
	while (k>0) {
		if (coin[n] <= k) {
			c++;
			k -= coin[n];		
		}
		else
			n--;
	}
	printf("%d", c);


	return 0;
}