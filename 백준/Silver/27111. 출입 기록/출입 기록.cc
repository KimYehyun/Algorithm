#include <bits/stdc++.h>
using namespace std;

int n;
int arr[200001];
int ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
	
	while (n--) {
		int a, b; 
        cin >> a >> b;
		if (b) {
			if (arr[a]) ans++;
			else arr[a] = 1;
		}
		else {
			if (!arr[a]) ans++;
			else arr[a] = 0;
		}
	}

	for (int a = 1; a < 200001; a++) ans += arr[a];

	cout << ans;
    return 0;
}