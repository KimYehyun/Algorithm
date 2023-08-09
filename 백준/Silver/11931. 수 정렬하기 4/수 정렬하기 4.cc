#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>v;

int main(void) {
	
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		v.push_back(a);
	}

	sort(v.begin(), v.end(), greater<int>());
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}

	return 0;
}