#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>v;

int main(void) {

	int N,M;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		long long int a;
		scanf("%lld", &a);
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		long long int m;
		scanf("%lld", &m);
		if (binary_search(v.begin(), v.end(), m))
			printf("1\n");
		else
			printf("0\n");	
	}

	return 0;
}