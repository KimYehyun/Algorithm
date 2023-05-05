#include<iostream>
using namespace std;

int main()
{
	int n;
	int ans;
	int arr[15];

	scanf("%d", &n);

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i < 11; i++)
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ans);
		printf("%d\n", arr[ans]);
	}
}