#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct node {
	int kg, cm, idx, cnt;
};

bool cmp( node &a, node b) {
	if (a.kg == b.kg) return a.cm < b.cm;
	return a.kg < b.kg;
}
bool cmp2(node& a, node b) {
	return a.idx < b.idx;
}


int main(void) {
	vector<node>v;
	int n, k, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k >> c;
		v.push_back({ k,c,i,1 });
	}

	sort(v.begin(), v.end(), cmp);
    
	for (int i = 0; i < v.size()-1; i++) 
		for (int j = i+1; j < v.size(); j++) 
			if (v[i].kg < v[j].kg && v[i].cm < v[j].cm)  
				v[i].cnt++;
		
	sort(v.begin(), v.end(), cmp2);

	for (int i = 0; i < n; i++) cout << v[i].cnt << " ";


	return 0;
}