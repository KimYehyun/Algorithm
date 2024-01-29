#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
using namespace std;
int arr[10];
int primeNum[10000];
int n, m, num;
void primeN() {
	for (int i = 2; i <= num; i++) 
		primeNum[i] = i;
	
	for (int i = 2; i <= sqrt(num); i++) {
		if (primeNum[i] == 0) continue;
		for (int j = i * i; j <= num; j += i) {
			primeNum[j] = 0;
		}
	}	
	return;
}

bool check(int n) {
	if (primeNum[n] != 0) return true;
	else return false;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		num += arr[i];
	}
	primeN();

	vector<int>v;
	set<int>ans;
	int check_n = 0;
	for (int i = 0; i < m; i++) v.push_back(1);
	for (int i = 0; i < n - m; i++)v.push_back(0);
	do {
		check_n = 0;
		for (int i = 0; i <v.size(); i++) {
			if (v[i] == 1) {
				//cout << i << " ";
				check_n += arr[i];
			}
		}
		//cout << "\n";
		//cout << "소 무게 합: "<<check_n << "\n";
		if (check(check_n)) ans.insert(check_n);
	} while (prev_permutation(v.begin(), v.end()));
	
	if (ans.size() == 0) cout << -1;
	else {
		for (auto a : ans) {
			cout << a << " ";
		}
	}
	
	return 0;
}