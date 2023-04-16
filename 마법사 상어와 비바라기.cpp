#include<iostream>
#include<vector>
using namespace std;
int n, m;
int A[51][51];
vector<pair<int, int>>v;


void move() {
							
}

int main(void) {
	
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 1; i <= m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}

	for (int i = 1; i <= m; i++) {
		move();
	}
	


	return 0;
}