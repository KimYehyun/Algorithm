#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m, k, a;
	cin >> n >> m >> k;
	int result,key =987654321;
	for (int i = 0; i < k; i++) {
		cin >> a;
		result = abs(a - m);
		if (key > result) key = result;
	}
	
	cout<< min(abs(m-n),key+1)<<"\n";
	return 0;
}