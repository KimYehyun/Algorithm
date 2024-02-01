#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
int n, m, car;
int Rs[101];
int Wk[2001];
int use[101];
long long money;
queue<int>wait;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> Rs[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> Wk[i];
	}

	for (int i = 0; i < m * 2; i++) {

		cin >> car;
	
		if (car > 0) {
			bool flag = 0;
			for (int j = 1; j <= n; j++) {
				if (use[j] == 0) {
					use[j] = car;
					money += Rs[j] * Wk[car];
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				wait.push(car);
			}
		}
		else {
			bool flag = 0;
			for (int j = 1; j <= n; j++) {
				if (use[j] == abs(car)) {
					use[j] = 0;
					flag = 1;
				}
				if (flag==1 && !wait.empty()) {
					use[j] = wait.front();
					money += Rs[j] * Wk[wait.front()];
					wait.pop();
				}
				if (flag == 1) break;
				
			}
		}
	}

	cout << money;
	return 0;
}