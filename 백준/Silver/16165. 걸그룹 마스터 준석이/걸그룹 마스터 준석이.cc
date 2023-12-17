#include<iostream>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
int n, m, member, q;
string group, name , k;
multimap<string, string>mm1;
multimap<string, string>mm2;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> group >> member;
		for (int j = 0; j < member; j++) {
			cin >> name;
			mm1.insert({ group,name });
			mm2.insert({ name,group });
		}
	}

	for(int i = 0;i<m;i++){
		cin >> k >> q;
		if (q == 1) {
			auto it = mm2.find(k);
			cout << it->second << "\n";
		}
		else {
			set<string>s;
			for (auto a : mm1) {
				if (a.first == k) {
					s.insert(a.second);
				}
			}
			for (auto a : s) {
				cout << a << "\n";
			}
		}
	}
	return 0;
}