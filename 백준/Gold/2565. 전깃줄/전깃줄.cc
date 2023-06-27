#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int arr[501];
int main(void) {

	int n;
	int ans = 0;
	vector<pair<int, int>>v;
	vector<int>list;
	list.push_back(-1);

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) 
	{
		if (v[i].second > list.back())
		{
			list.push_back(v[i].second);
			ans++;
		}
		else
		{
			auto k = lower_bound(list.begin(), list.end(), v[i].second);
			*k = v[i].second;
		}
	}

	printf("%d", n-ans);
	return 0;

}