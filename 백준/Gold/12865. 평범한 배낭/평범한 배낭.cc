#include <iostream>
#include <algorithm>

using namespace std;

int dp[102][100002];
int w[102], v[102], n, m;

int main(void)
{
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		scanf("%d %d", &w[i], &v[i]);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			if (j < w[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
	}
	printf("%d", dp[n][m]);
	return 0;
}