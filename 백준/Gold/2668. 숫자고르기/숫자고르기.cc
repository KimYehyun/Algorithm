#include <iostream>
#include <string.h>
using namespace std;

int n = 0, result_index = 0;
int arr[101];
int visited[101];
int result[101];

void dfs(int current, int start) {
	if (visited[current]) {
		if (current == start)
			result[result_index++] = start;
	}
	else {
		visited[current] = 1;
		dfs(arr[current], start);
	}

}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++) {
		memset(visited, 0, sizeof(visited));
		dfs(i, i);
	}

	cout << result_index <<"\n";
	for (int i = 0; i < result_index; i++)
		cout << result[i] <<"\n";

	return 0;
}