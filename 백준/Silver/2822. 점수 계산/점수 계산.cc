#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	vector<pair<int, int>>v;
	vector<int>v1;
	for (int i = 0; i <8; i++) {
		int a;
		cin >> a;
		v.push_back(make_pair(a, i+1));
	}

	sort(v.begin(), v.end(), greater<>());

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += v[i].first;
		v1.push_back(v[i].second);
	}
	sort(v1.begin(), v1.end());
	cout << sum << '\n';
	for (int i = 0; i < 5; i++)
		cout << v1[i] <<' ';

	return 0;
}