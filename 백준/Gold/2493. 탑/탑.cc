#include<iostream>
#include<stack>
using namespace std;

int n, m;
stack<pair<int, int>>st;
int main(void) {

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		while (!st.empty()) {
			if (st.top().first > m) {
				printf("%d ", st.top().second);
				break;
			}
			st.pop();
		}
		if (st.empty()) {
			printf("0 ");
		}
		st.push(make_pair(m, i+1));
	}
	return 0;
}