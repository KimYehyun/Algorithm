#include<iostream>
#include<string>
#include<memory.h>
using namespace std;
string str;
int n;
int arr[26];
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; i++) {
		getline(cin,str);
		memset(arr, 0, 26*sizeof(int));
		for (int j = 0; j < str.size(); j++) {
			if (str[j] >= 65 && str[j] <= 90) str[j] += 32;
			if (str[j] < 97 || str[j]>122) continue;
			arr[str[j] - 97]++;
		}
		bool a=0, b=0, c=0;
		for (int k = 0; k < 26; k++)
			if (arr[k] < 1) a = 1;

		for (int k = 0; k < 26; k++)
			if (arr[k] < 2) b = 1;

		for (int k = 0; k < 26; k++)
			if (arr[k] < 3) c = 1;
		
		if (a == 1) cout << "Case " << i << ": Not a pangram\n";
		else if (c == 0)  cout << "Case " << i << ": Triple pangram!!!\n";
		else if(b==0)  cout << "Case " << i << ": Double pangram!!\n";
		else if (a == 0) cout << "Case " << i << ": Pangram!\n";
	}

	return 0;
}