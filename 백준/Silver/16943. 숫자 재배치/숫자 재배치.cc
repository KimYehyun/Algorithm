#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string A, B;
	cin >> A >> B;
	vector<char>v;
	for (int i = 0; i<A.size(); i++) v.push_back(A[i]);
	sort(v.begin(), v.end());
	vector<int>key;
	do {
		string str="";
		for (int i = 0; i < v.size(); i++) {
			str += v[i];
		}
		if(str[0]!='0')
		   key.push_back(stoi(str));

	} while (next_permutation(v.begin(), v.end()));

	/*for (auto a : key) {
		cout << a << "\n";
	}*/
	
	int idx = lower_bound(key.begin(), key.end(), stoi(B))-key.begin();
	//cout << idx << "\n";
	
	if (idx == 0) {
		cout << -1;
	}
	else {
		cout << key[idx-1];
	}

	return 0;
}