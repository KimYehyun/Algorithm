#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N;
int visit[2000001];
int arr[21];

void solve(int x, int sum)
{
	visit[sum] = true;
	if (x == N) return;
	else {
		solve(x + 1, sum);
		solve(x + 1, sum + arr[x]);
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	solve(0, 0);

	int j = 1;
	while (visit[j] == true) j++;
	cout << j;
}