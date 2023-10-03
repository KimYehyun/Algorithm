#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int arr[10];
bool visit[10];
int input[10];
void dfs(int cnt) {
	if (cnt == m) {
		for(int i=0;i<cnt;i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		arr[cnt] = input[i];
		dfs(cnt+1);	
	}	
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	sort(input, input + n);
	dfs(0);

	return 0;
}