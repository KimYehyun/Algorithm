#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int N, M;
int Rs[101];
int Wk[10001];
int p[101];
int m, money;
queue<int>q;
int main(void) {

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> Rs[i];
	}
	for (int i = 1; i <= M; i++) {
		cin >> Wk[i];
	}

	for (int i = 0; i < M * 2; i++) {
		bool a = 0;
		cin >> m;
		if (m > 0) {
			for (int j = 0; j < N; j++) {
				if (p[j] == 0) {
					p[j] = m;
					a = 1;
					money += Rs[j] * Wk[m];
					break;
				}
			}
			if (a == 0) q.push(m);
		}
		else {
			for (int j = 0; j < N; j++) {
				if (p[j] == abs(m)) {
					p[j] = 0;
					if (!q.empty()) {
						p[j] = q.front();
						money += Rs[j] * Wk[q.front()];
						q.pop();
					}
				}
			}
		
		}	
	}

	cout << money;
	return 0;
}