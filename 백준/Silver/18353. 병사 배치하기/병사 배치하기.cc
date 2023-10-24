#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int v[2001];
int list[2001];
int binarysearch(int left, int right, int target) {
	int mid;
	while (left < right) {
		mid = (left + right) / 2; 
		if (list[mid] > target) left = mid + 1;
		else right = mid;	
	}
	return right;
}

int main(void) {

	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> v[i];
	int j = 0;
	list[0] = v[0];
	int i = 1;
	while (i < n) {
		if (list[j] > v[i]) {
			list[j + 1] = v[i];
			j += 1;
		}
		else {
			int idx = binarysearch(0, j, v[i]);
			list[idx] = v[i];
		}
		i += 1;
	}
	cout << n - (j + 1) <<"\n";
	return 0;

}