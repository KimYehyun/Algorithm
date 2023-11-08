#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int arr[200001];
int count_v[100001];

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = 0; int right = 1;
	count_v[arr[0]]++;
	int max_v = 0;

	while (1)
	{
		if (count_v[arr[right - 1]] > m) {
			count_v[arr[left]]--;
			left++;	
		}
		else {
			max_v = max(max_v, right - left);
			if (right >= n) {
				break;
			}
			count_v[arr[right]]++;
			right++;
		}	
	}

	cout << max_v;


	return 0;
}