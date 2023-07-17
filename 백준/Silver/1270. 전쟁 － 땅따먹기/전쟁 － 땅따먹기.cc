#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
long long arr[100001];
long long result1[100001];
long long result2[100001];
int main(void) {

	int n,m;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {

		long long a = 0;
		scanf("%d", &m);

		memset(arr, 0, 100000 * sizeof(long long));
		memset(result1, 0, 100000 * sizeof(long long));
		memset(result2, 0, 100000* sizeof(long long));

		for (int j = 0; j < m; j++) {
			scanf("%lld", &arr[j]);
		}
		sort(arr, arr + m);
		result1[0]= arr[0];
		result2[0] = 1;
		for (int i = 1; i < m; i++) {
			if (arr[i] == arr[i - 1])
				result2[a]++;
			else {
				a++;
				result1[a] = arr[i];
				result2[a]++;
			}
		}
		bool chk=0;
		long long key;
		for (int i = 0; i <= a; i++) {
			if (result2[i] > m / 2) {
				chk = 1;
				key = result1[i];
			}		
		}
		if(chk==1)
			printf("%lld\n",key);
		else
			printf("SYJKGW\n");
	}
	return 0;
}