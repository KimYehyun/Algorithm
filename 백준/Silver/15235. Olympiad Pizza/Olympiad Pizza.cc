#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
int arr[1001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		for (int j = 0; j < a; j++) {
			q.push({ j,i });
		}
	}
	int a = 1;
	while (!q.empty()) {
		arr[q.top().second] = a;
		q.pop();
		a++;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}