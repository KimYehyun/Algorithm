#include<iostream>
#include<queue>
using namespace std;

int n;
priority_queue<int> pq;
int main(void) {

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if (a == 0) {
			if (pq.empty())
				printf("0\n");
			else {
				printf("%d\n", pq.top());
				pq.pop();
			}
				
		}
		else {
			pq.push(a);
		}
	}
	


	return 0;
}