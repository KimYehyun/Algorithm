#include <iostream>
using namespace std;

int arr[100001];

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		arr[a]++;
	}
    
	for (int i = N; i >= 0; i--)
	{
		if (arr[i] == i)
		{
			cout << i << "\n";
			return 0;
		}
	}
	cout << "-1" << "\n";
	return 0;
}
