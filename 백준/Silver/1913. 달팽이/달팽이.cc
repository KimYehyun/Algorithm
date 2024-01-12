#include<iostream>
using namespace std;
int arr[1000][1000];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int N = 0; 
	int want = 0; 
	int x = 0, y = 0; 
	int row = -1, col = 0;
	int dir = 1;
	cin >> N;
	int copy = N;
	cin >> want;
	int squared = N * N;

	while (squared > 0)
	{
		for (int i = 0; i < copy; i++)
		{
			row = row + dir;
			arr[row][col] = squared;
			if (squared == want)
			{
				x = row + 1;
				y = col + 1;
			}
			squared = squared - 1;
		}

		copy = copy - 1;
		for (int i = 0; i < copy; i++)
		{
			col = col + dir;
			arr[row][col] = squared;
			if (squared == want)
			{
				x = row + 1;
				y = col + 1;
			}
			squared = squared - 1;
		}
		dir = dir * (-1);
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] <<" ";
		}
		cout << "\n";
	}
	cout << x << " " << y;
	return 0;
}