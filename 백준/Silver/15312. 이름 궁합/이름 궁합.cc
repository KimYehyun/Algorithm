#include<iostream>
#include<vector>
using namespace std;
int arr[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string A, B;
	vector<int>v;
	cin >> A >> B;
	for (int i = 0; i < A.size(); i++) {
		v.push_back(arr[A[i]-65]);
		v.push_back(arr[B[i]-65]);
	}
	while (1) {
		vector<int>tmp;
		for (int i = 0; i < v.size() - 1; i++)
			tmp.push_back((v[i] + v[i + 1]) % 10);
		v = tmp;
		if (v.size() == 2) {
			cout << v[0] << v[1];
			return 0;
		}
	}
	return 0;
}