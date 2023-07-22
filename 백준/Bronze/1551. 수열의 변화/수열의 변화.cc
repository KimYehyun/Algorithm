#include<iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void) {

	int arr[21];
	int n, k;
	scanf("%d %d", &n, &k);

	string str;
	cin >> str;

	istringstream ss(str);
	string strBuffer;
	
	int c = 0;
	while (getline(ss, strBuffer, ',')) {
		arr[c] = stoi(strBuffer);
		c++;
	}
	
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			arr[j] = arr[j + 1] - arr[j];
		}
	}

	printf("%d", arr[0]);
	for (int i = 1; i < n - k; i++)
		printf(",%d", arr[i]);
	printf("\n");
	
	return 0;
}