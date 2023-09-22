#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(void) {
	int n;
	multiset<string>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		s.insert(name);
	}
	
	for(int i=0;i<n-1;i++){
		string str;
		cin >> str;
		multiset<string>::iterator it = s.find(str);
		s.erase(it);
	}

	cout << *s.begin();
	

	return 0;
}