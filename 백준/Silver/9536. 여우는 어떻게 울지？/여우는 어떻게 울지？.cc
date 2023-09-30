#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin.ignore();
		string s; 
		getline(cin, s);
		map<string, bool> m;
		while (true) {
			string a, b, c;
			cin >> a >> b >> c; 
			if (a == "what") {
				cin >> b >> c; 
				break;
			}
			m[c] = true; 
		}

		string res = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				if (!m[res])
					cout << res << " ";
				res = "";
			}
			else
				res += s[i];
		}
		if (!m[res]) 
			cout << res << " ";
		cout << "\n";
	}
	return 0;
}
