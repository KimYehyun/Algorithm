#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

int n;
deque<pair<int, int>>dq;
vector<int>A;
vector<int>B;
vector<int>C;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		if (s == 1) {
			int a, b;
			cin >> a >> b;
			dq.push_back({ a,b });
		}
		else if (s == 2){
			int b;
			cin >> b;
			if (dq.front().second == b) {
				A.push_back(dq.front().first);
				dq.pop_front();
			}
			else {
				B.push_back(dq.front().first);
				dq.pop_front();
			}
		}	
	}	
	
	if (A.size() == 0) {
		cout << "None\n";
	}
	else {
		sort(A.begin(), A.end());
		for (auto k : A) {
			cout << k << " ";
		}
		cout << "\n";
	}
	
	if (B.size() == 0) {
		cout << "None\n";
	}
	else {
		sort(B.begin(), B.end());
		for (auto k : B) {
			cout << k << " ";
		}
		cout << "\n";
	}

	if (dq.empty()) {
		cout << "None\n";
	}
	else {
		while(!dq.empty()) {
			C.push_back(dq.front().first);
			dq.pop_front();
		}
		sort(C.begin(), C.end());
		for (auto k : C) {
			cout << k << " ";
		}
	}
	return 0;
}