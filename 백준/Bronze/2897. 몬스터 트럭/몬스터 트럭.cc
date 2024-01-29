#include<iostream>
using namespace std;
char arr[50][50];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int ans0 = 0, ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
	for (int i = 1; i < n; i++) {	
		for (int j = 1; j < m; j++) {
			int x = 0;
			bool no = 0;
			//cout << i-1 << " "<< j-1 <<" "<<arr[i-1][j-1]<<"\n";
			if (arr[i-1][j-1] == 'X')x++;
			else if (arr[i - 1][j - 1] == '#')no=1;
			
			//cout << i-1 << " " << j << " " << arr[i-1][j] << "\n";
			if (arr[i - 1][j] == 'X')x++;
			else if (arr[i - 1][j] == '#')no=1;
			//cout << i << " " << j-1 << " " << arr[i][j-1] << "\n";
			
			if (arr[i][j-1] == 'X')x++;
			else if (arr[i][j-1] == '#')no=1;
			//cout << i << " " << j << " " << arr[i][j] << "\n";
			
			if (arr[i][j] == 'X')x++;
			if (arr[i][j] == '#')no=1;
			//cout << "x: " << x<<"\n"<<"\n";

			if (no == 1) continue;
			if (x == 0)ans0++;
			else if (x == 1) ans1++;
			else if (x == 2) ans2++;
			else if (x == 3)ans3++;
			else ans4++;
		}
		
	}
	cout << ans0 << "\n";
	cout << ans1 << "\n";
	cout << ans2 << "\n";
	cout << ans3 << "\n";
	cout << ans4 ;





	return 0;
}