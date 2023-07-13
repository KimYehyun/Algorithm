#include<iostream>
#include<algorithm>
using namespace std;

int arr[100];

int main(void) {

	string str;
	cin >> str;
	int max = 0;
	char key;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] >= 97)
			str[i] = str[i] - 32;
		arr[str[i]]++;
	}

	
	
	for (int i = 65; i <=90; i++) {
		if (max < arr[i]) {
			max = arr[i];
			key = i;
		}
	}

	sort(arr, arr + 100,greater<int>());
	
	if (arr[0] == arr[1])
		printf("?\n");
	else
		printf("%c\n", key);


	return 0;
}